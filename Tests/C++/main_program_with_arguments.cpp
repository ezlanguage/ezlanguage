/*
* Par ANDRES Hervé
* N'oubliez pas à passer les parametres en ligne de commande ex: ./hello_arg.exe --x 2 --c hello
*/

#include <iostream>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int max_i = 5;

void showData (int x, std::string c){
  std::cout << x << " fois " << c << std::endl;
}


int main(int argc, char *argv[]){
    int x;
    std::string c;
    
    int option_char; 

    while ( (option_char= getopt(argc,argv, "x:c:")) != -1 ){
            switch ( option_char ) {  
                case 'x' :  
		  x = atoi(optarg);
                break;

                case 'c': 
		  c = optarg;
                break;
	    }
    }
       
    for(int i =0; i < max_i; i++){
      showData(x, c);
    }
    
    return 0;
}
