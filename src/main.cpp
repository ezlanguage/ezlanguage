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
int help = 0;


// Ligne de commande g++
string commande_gpp = "g++ ";

//aide
string AIDE_PROG = "\
EZL \n\
	 \n\
SYNOPSIS \n\
	EZL [options] files.. \n\
	for the options list, see the options section below. \n\
	 \n\
DESCRIPTION \n\
	This is the EZ language compiler, a C based language for beginners. \n\
	 \n\
EXAMPLES \n\
	Some xamples of common usage : \n\
	EZL example1.ez example2.ez -o example.exe \n\
	 \n\
OPTIONS \n\
	--directinput			: Enable direct input for EZ language \n\
	-h, --help			: Displays this information \n\
	--noexec			: Do not launch the executable \n\
	-o <file>, --output=<file>	: Name the executable <file> \n\
	-O1, --optimisation=1		: Reduces the execution time, first level of optimization \n\
	-O2, --optimisation=2		: Same as O1 lvl2 \n\
	-O3, --optimisation=3		: Same as O2 lvl3 \n\
	-v, --verbose			: Displays all the compilation steps in the command prompt \n\
	-w, --warning			: Displays all the warning messages \n\
 \n\
SEE ALSO \n\
   	Full documentation at ezlanguage.com \n\
   	 \n\
AUTHOR \n\
   	M2 SILI 2016 - 2017  \n\
   	 \n\
COPYRIGHT \n\
	Specify your copyright information.\n";

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
				if (string(long_options[option_index].name) == "noexec"){
					//cout << "Not launching .exe file..." << endl;
				}
				break;
			// Compiler options computing
				
			// Affiche l'aide
			case 'h':
				help = 1;
				
				// teste l'existence du fichier d'aide
				cout << AIDE_PROG << endl;
				break;

			// Ajoute le fichier de sortie au compilateur g++
			case 'o':
				//cout << "Indicates the name of the output file" << endl;
				commande_gpp += "-o "+string(optarg)+" ";
				output_name = string(optarg);
				break;
			case 'w':
				//cout << "Displays warning messages" << endl;
				break;
			// Ajoute l'option -o(1..3) au compilateur g++
			case 'O':
				//cout << "Optimization option level: " << optarg << endl;
				if(atoi(optarg) >= 1 && atoi(optarg) <= 3){
					commande_gpp += "-O"+string(optarg)+" "; 
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
//	fic_ezl.push_back("/home/etudiant/Cl…/ezlanguage/tests/exemple.ez");
    //tableaux des extensions des fichiers a traiter
    int nb_ext = 2;
    const string ext_ez[nb_ext] = {".ez", ".ezl"};
    //ajout des fichiers a parser
	for(int i=0; i<nb_ext; ++i){
		for(int j=optind; j<argc; ++j){
			parse_argv_ext(ext_ez[i].c_str(), fic_ezl, argv[j]);
		}
	}        
    
    //test des arguments restant
	for(int i=optind+1; i<argc; ++i){
		cout<< "Parsing the "<< i<< " file : "<< argv[i]<< endl;
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

	if(help != 1){
		cout << commande_gpp << endl;
		system(commande_gpp.c_str());
		if(no_execution != 1){
			if(output_name != ""){
				string tmp_output= "./" + output_name;	
				system(tmp_output.c_str());
			}else{
				string tmp_output= "./a.out";	
				system(tmp_output.c_str());
			}
		}
		cout << "\033[1;36mFin du parsing\033[0m" << endl;
	}

    exit(EXIT_SUCCESS);
}

