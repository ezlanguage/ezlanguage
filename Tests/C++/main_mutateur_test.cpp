class ​ Person ​ {
public​ :
string ​ nom​ ;
string ​ prenom​ ;
int ​ age​ ;

	Person():nom(​ ""​ ),prenom(​ ""​ ),age(​ 0 ​ ){}

	void set_nom(​ string​ _nom){

		transform(_nom.begin(), _nom.end(), _nom.begin(), : ​ :tolower​ );
		nom​ =_nom;
	}


	void​ set_prenom(string _prenom){
		transform(_prenom.begin(), _prenom.end(), _prenom.begin(), ​ ::tolower
		pre​ nom​ =_prenom;
	}

	void​ set_age(int _age){
		if​ (_age <= 0 || _age >100){
			cout<<​ "l’age n’est pas correct ! "​ <<endl;
		}else{
			age​ =_age;
		}
	}
};

int ​ main(){
	Person ​ p;
	p.set_nom(​ "duPOnt"​ );
	p.set_prenom(​ "anDRe"​ );
	p.set_age(​ 26​ );
	cout<<​ "nom "​ <<p.nom<<endl;
	cout<<​ "preniom "​ <<p.prenom<<endl;
	cout<<​ "age “​ <<p.age<<endl;
}
