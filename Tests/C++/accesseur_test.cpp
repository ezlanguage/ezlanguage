#include <iostream>      
#include <string>
#include <algorithm>

class ​ Person ​ {

public​ :
	string ​ nom​;
	string ​ prenom​;

	Person():nom(​ ""​ ),prenom(​ ""​ ){}
		string​ get_nom(){
		string​ s=nom;
		transform(s.begin(), s.end(), s.begin(), ​ ::toupper​ );
		return​ s;
	}


	string​ get_prenom(){

		string​ s=prenom;
		transform(s.begin(), s.end(), s.begin(), ​ ::toupper​ );
		return​ s;
	}
};
	int ​ main()
	{
		Person​ p;
		p.nom=​ "dupont"​ ;
		p.prenom=​ "andre"​ ;
		cout​ <<​ "nom: " ​ <<​ p.nom​ <<​ endl;
		cout​ <<​ "prenom: "​ <<​ p.prenom​ <<​ endl;
	}

