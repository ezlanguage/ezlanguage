#include <stdlib.h>
#include <getopt.h>
#include <iostream>
#include <string.h>
#include <vector>

using namespace std;

extern FILE* yyin;
extern int yyparse();

<<<<<<< HEAD
//FLAGS 
=======
//FLAGS
>>>>>>> 691ace620bc9011b7b780a8454cf3c8797df03ff
static int verbose_flag;

//Main
int main ( int argc , char ** argv ){
<<<<<<< HEAD
	int opt;
	vector<char*> fic_ezl;

	//boucle pour les arguments en ligne de commande programmés
	while(1){
		//options
		static struct option long_options[] = {
			// flags
			{"verbose",	no_argument,	&verbose_flag, 1},
			{"brief",	no_argument,	&verbose_flag, 0},
			
			//autres
			{"help",		no_argument,		0, 'h'},
			{"noexec",		no_argument,		0,  0 },
			{"optimisation",	required_argument,	0, 'O'},
			{"warning",		no_argument,		0, 'w'},
			{"output",		required_argument,	0, 'o'},
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
				if (string(long_options[option_index].name) == "noexec")
					cout << "Ne pas lancer l'exécutable" << endl;
					break;
				break;
			//options
			case 'h':
				cout << "Faire une aide" << endl;
				break;

			case 'o':
				cout << "Gerer un output" << endl;
				break;
			case 'w':
				cout << "Afficher les warning" << endl;
				break;
			case 'O':
				cout << "Option d'optimisation niveau: " << optarg << endl;
				break;
			//option inconnue, s'il y a une option avec un tiret ou deux, c'est forcement autre chose qu'un fichier donc erreur
			case '?':
				cout << "Option inconnue : " << option_index << endl;
				exit(EXIT_FAILURE);
			//defaut
			default:
				abort ();
		}
	}
	
	//arguments qui ne sont pas prévus, donc des fichiers si la bonne extension, erreur sinon
	for (int i = optind; i < argc-1; ++i) {
		//test de l'extension
		const char* ext_ez = ".ezl";
		for(unsigned int j = 0; j < strlen(ext_ez) ; ++j){
			//si l'extension est mauvaise
			if(ext_ez[j] != argv[i][strlen(argv[i])-strlen(ext_ez)+j]){
				cerr << "Option inconnue ou fichier invalide : -" << argv[i]<< "-" << endl;
				exit(EXIT_FAILURE);
			}
			//si l'extension est bonne
			if(j == strlen(ext_ez)-1){
				//on garde le fichier sous le coude
				fic_ezl.push_back(argv[i]);
			}
		}
	}	
	
	//affichage test
	for(unsigned int i = 0; i < fic_ezl.size(); ++i){
		cout << "Fichier à traiter numero " << i << " : " << fic_ezl[i] << endl;
	}
	cout << "Verbose : " << verbose_flag << endl ;

	yyparse();
	
	exit(EXIT_SUCCESS);
=======
        int opt;
        vector<char*> fic_ezl;

        //boucle pour les arguments en ligne de commande programmés
        while(1){
                //options
                static struct option long_options[] = {
                        // flags
                        {"verbose",	no_argument,	&verbose_flag, 1},
                        {"brief",	no_argument,	&verbose_flag, 0},

                        //autres
                        {"help",		no_argument,		0, 'h'},
                        {"output",		required_argument,	0, 'o'},
                        {0, 0, 0, 0}
                };

                //getopt_long recupere l'option ici
                int option_index = 0;

                opt = getopt_long(argc, argv, "ho:", long_options, &option_index);

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
                                break;
                        //options
                        case 'h':
                                cout << "Faire une aide" << endl;
                                break;
                        case 'o':
                                cout << "Gerer un output" << endl;
                                break;
                        //option inconnue, s'il y a une option avec un tiret ou deux, c'est forcement autre chose qu'un fichier donc erreur
                        case '?':
                                cout << "Option inconnue : " << option_index << endl;
                                exit(EXIT_FAILURE);
                        //defaut
                        default:
                                abort ();
                }
        }

        //arguments qui ne sont pas prévus, donc des fichiers si la bonne extension, erreur sinon
        for (int i = optind; i < argc; ++i) {
                //test de l'extension
                const char* ext_ez = ".ez";
                //const char* ext_ezl = ".ezl";
                for(unsigned int j = 0; j < strlen(ext_ez) ; ++j){
                        //si l'extension est mauvaise
                        if(ext_ez[j] != argv[i][strlen(argv[i])-strlen(ext_ez)+j]){
                                cerr << "Option inconnue ou fichier invalide : -" << argv[i]<< "-" << endl;
                                exit(EXIT_FAILURE);
                        }
                        //si l'extension est bonne
                        if(j == strlen(ext_ez)-1){
                                //on garde le fichier sous le coude
                                fic_ezl.push_back(argv[i]);
                        }
                }
        }

        //affichage test
        for(unsigned int i = 0; i < fic_ezl.size(); ++i){
                cout << "Fichier à traiter numero " << i << " : " << fic_ezl[i] << endl;
        }
        cout << "Verbose : " << verbose_flag << endl ;

    /// TODO Boucle for à faire pour parser plusieurs fichiers ?
        //yyin = fopen(optarg, "r");
        //cout << "Utilisation d'un fichier : -"<< optarg<< "-"<< endl;
        yyparse();

        exit(EXIT_SUCCESS);
>>>>>>> 691ace620bc9011b7b780a8454cf3c8797df03ff
}

