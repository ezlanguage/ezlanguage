extern FILE* yyin;

using namespace std;

int main ( int argc , char ** argv )
{

    if(argc > 1) {
        if(argc ==2) {
            yyin = fopen(argv[1], "r");
            cout << "Utilisation d'un fichier"<< endl;
            yyparse();
        }
        else cerr << "Trop d'arguments en paramètre, ceux en trop sont ignorés"<< endl;
    } else {
        cerr << "Veillez préciser le nom du fichier" << endl;
   }
}

