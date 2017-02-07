#include <iostream>      // std::locale, std::toupper

class ​ Person
{
	public​ :
	string ​ nom​ ;
	string ​ prenom​ ;
	int ​ age​ ;

	// Constructeur par défaut
	Person​ ():nom(​ ""​ ),prenom(​ ""​ ),age(​ 0 ​ ){}

	// Constructeur de copie
	Person​ ( ​ const ​ Person ​ & p):nom(p.nom),prenom(p.prenom),age(p.age){}
}


int main()

	// Déclaration de l’objet
	Person​ p1;
	// Initialisation des attributs
	p1.nom=​ "dupont"​ ;
	//p1.prenom=​ "stephanie"​ ;
	p1.age=​ 26​ ;
	// Construction de l’objet à partir du constructeur de copie
	Person​ p2(p1);

return 1;
}
