#include <stdlib.h>
#include <getopt.h>
#include <iostream>
#include <string.h>
#include <vector>
#include <algorithm>

using namespace std;

extern FILE* yyin;
extern int yyparse();
extern FILE* yyout;

//FLAGS
static int verbose_flag;
int directinput = 0;
int no_execution = 0;

// Ligne de commande g++
string commande_gpp = "g++ ";

//functions
//arguments qui ne sont pas prévus, donc des fichiers si la bonne extension, erreur sinon
void parse_argv_ext(const char* ext_ez, vector<char*> &fic_ezl, char * fic_cmp){
	for(unsigned int j = 0; j < strlen(ext_ez) ; ++j){
    	//si l'extension est mauvaise
        if(ext_ez[j] != fic_cmp[strlen(fic_cmp)-strlen(ext_ez)+j]){
        	return ;
        }
        //si l'extension est bonne
        if(j == strlen(ext_ez)-1){
			//on garde le fichier sous le coude
			fic_ezl.push_back(fic_cmp);
        }
	}
}

//main
int main ( int argc , char ** argv ){
	int opt;
	string output_name = "";

	//boucle pour les arguments en ligne de commande programmés
	while(1){
		//options
		static struct option long_options[] = {
			// flags
			{"verbose",			no_argument,	&verbose_flag, 	1},
			{"brief",			no_argument,	&verbose_flag, 	0},
			{"noexec",			no_argument,	&no_execution, 	1},
			{"directinput",		no_argument,	&directinput,	1},
			
			//autres
			{"help",			no_argument,		0, 	'h'},
			{"optimisation",	required_argument,	0, 	'O'},
			{"warning",			no_argument,		0, 	'w'},
			{"output",			required_argument,	0, 	'o'},
			{0, 0, 0, 0}
		};
		
		//getopt_long recupere l'option ici
		int option_index = 0;
		
		opt = getopt_long(argc, argv, "ho:f:O:w", long_options, &option_index);
		
		//fin des options
		if(opt == -1){
			break;
		}
		
		//options en cours
		switch(opt){
			//flags
			case 0:
				if (long_options[option_index].flag != 0)
					break;
				// flag indiquant que l' exécutable ne doit pas être lancé après la compilation
				if (string(long_options[option_index].name) == "noexec")
					cout << "Do not launch .exe file" << endl;
				break;
			// Compiler options computing
				
			// Affiche l'aide
			case 'h':
				cout << "Displays help" << endl;
				break;
			// Ajoute le fichier de sortie au compilateur g++
			case 'o':
				cout << "Indicates the name of the output file" << endl;
				commande_gpp += "-o "+string(optarg)+" ";
				output_name = string(optarg);
				break;
			case 'w':
				cout << "Displays warning messages" << endl;
				break;
			// Ajoute l'option -o(1..3) au compilateur g++
			case 'O':
				cout << "Optimization option level: " << optarg << endl;
				if(atoi(optarg) >= 1 && atoi(optarg) <= 3){
					commande_gpp += "-o"+string(optarg)+" "; 
				}
				break;
			// Option inconnue, s'il y a une option avec un tiret ou deux, c'est forcement autre chose qu'un fichier donc erreur
			case '?':
				cout << "Unknown option : " << option_index << endl;
				exit(EXIT_FAILURE);
			//defaut
			default:
				abort ();
		}
	}
	
	//vecteurs des fichiers a traiter
    vector<char*> fic_ezl;
    //tableaux des extensions des fichiers a traiter
    int nb_ext = 2;
    const char* ext_ez[nb_ext] = {".ez", ".ezl"};
    //ajout des fichiers a parser
	for(int i=0; i<nb_ext; ++i){
		for(int j=optind; j<argc; ++j){
			parse_argv_ext(ext_ez[i], fic_ezl, argv[j]);
		}
	}        
    
    //test des arguments restant
	for(int i=optind; i<argc; ++i){
		if(!(find(fic_ezl.begin(), fic_ezl.end(), argv[i]) != fic_ezl.end())){
			cerr << "Invalid file or unknown option : " << argv[i] << endl;
			exit(EXIT_FAILURE);
		}
	}


	// Boucle qui execute tout les fichiers
	if(!directinput){
		for(unsigned int i=0; i<fic_ezl.size(); ++i){
			cout << "\033[1;36mFile parsing : \033[1;37m" << fic_ezl[i] << endl;
			cout << "\033[1;36m=====================================\033[0m" << endl;
			yyin = fopen(fic_ezl[i], "r");

			if(!yyin){
				cerr <<  fic_ezl[i] << ": file opening failed." << endl;
			}else{
				// creation des fichiers cpp
				string fichier_tmp = string(fic_ezl[i]);
				fichier_tmp = fichier_tmp.substr(0,fichier_tmp.find("."));
				cout << "File extension is: " << fichier_tmp << endl;
				fichier_tmp +=".cpp";
				FILE * cpp_file = fopen(fichier_tmp.c_str(), "w"); 
				
				if(cpp_file == NULL){
					cerr << fichier_tmp << ": creation failed;" << endl;
					break;
				}		

				// parsing du fichiers ez en fichier cpp
				yyparse();

				yyout = cpp_file;
				
				// fermerture du fichier cpp
				fclose(cpp_file);
			}
			cout << "\033[1;36m=====================================\033[0m" << endl;
			cout << endl;
		}
	}else{
		cout << "\033[1;36mParsing begining : \033[1;37m" << endl;
		cout << "\033[1;36m=====================================\033[0m" << endl;
		yyparse();
		cout << "\033[1;36m=====================================\033[0m" << endl;
	}

	system(commande_gpp.c_str());
	if(output_name != ""){
		string tmp_output= "./" + output_name;	
		system(tmp_output.c_str());
	}else{
		string tmp_output= "./a.out";	
		system(tmp_output.c_str());
	}
	cout << "\033[1;36mFin du parsing\033[0m" << endl;

    exit(EXIT_SUCCESS);
}

