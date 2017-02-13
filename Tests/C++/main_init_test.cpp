class Person
{
public:
	string nom;
	string prenom;
	static int compteur;

	Person():nom(""),prenom(""){
	__init__();
	}
	void __init__(){
	compteur++;
	}
};
int Person::compteur=0;
