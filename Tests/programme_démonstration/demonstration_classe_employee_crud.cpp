//============================================================================
// Name        : Programme de démonstration CPP
// Author      : HOSSAM BENHOUD
// Version     :
// Copyright   : Your copyright notice
//============================================================================

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


class Employee{

public:

	   static int counter;
	   int _id;
	   string _nom;
	   string _prenom;
	   int _age;
	   float _salaire;
	   int _anciennete;

	   Employee(){
		   Employee::counter++;
		   _id=Employee::counter;
	   }

	   Employee(string nom,string prenom,int age,float salaire,int anciennete)
	   :_nom(nom),_prenom(prenom),_age(age),_salaire(salaire),_anciennete(anciennete)
	   {
		   Employee::counter++;
		   _id=Employee::counter;
	   }



		friend std::ostream& operator<<(std::ostream& os, const Employee& emp)
		{
			os<<"  Id:"<< emp._id<<"  Nom:"<<emp._nom<<"  Prenom:"<<emp._prenom<<"  Age:"<<emp._age<<"  Anciennete:"<<emp._anciennete<< "  Salaire:"<<emp._salaire<<endl;

		    return os;
		}


};

int Employee::counter=0;

class Employees{

public:

		vector<Employee> _list;


		void ajouter(Employee emp){
			_list.push_back(emp);
		}



		void modifier(Employee emp){

			for(int i=0;i<_list.size();i++){

				if(_list[i]._id == emp._id){

					_list[i]=emp;
				}
			}
		}

		void supprimer_par_employee(Employee emp){

			for(int i=0;i<_list.size();i++){

				if(_list[i]._id == emp._id){

						_list.erase(_list.begin()+i);
				  }
			}
		}


		void supprimer_par_id(int  id){

				for(int i=0;i<_list.size();i++){

					if(_list[i]._id == id){

							_list.erase(_list.begin()+i);
					  }
				}
		}


		Employee employee_plus_ancien(){


		 if(_list.size()>0){

			Employee emp=_list[0];

			for(Employee tmp: _list){

				if(tmp._anciennete>emp._anciennete){
					emp=tmp;
				}

			}
			return emp;

		 }
		 	 return Employee();

		}

		Employee employee_moins_ancien(){

			 if(_list.size()>0){

				Employee emp=_list[0];

				for(Employee tmp: _list){

					if(tmp._anciennete<emp._anciennete){
						emp=tmp;
					}

				}
				return emp;

			 }

			 return Employee();

		}

		void trier_employee_par_age(){

			sort(_list.begin(),_list.end(),[](const Employee  & emp1, const Employee & emp2){return emp1._age < emp2._age;});
		}

		void trier_employee_par_salaire(){
			sort(_list.begin(),_list.end(),[](const Employee  & emp1, const Employee & emp2){return emp1._salaire < emp2._salaire;});

		}

		friend std::ostream& operator<<(std::ostream& os, const Employees& obj)
		{
			for(Employee emp : obj._list){
				os<<emp;
			}
		    return os;
		}
};


int main() {


	// déclaration des employées
	Employee * emp1 = new Employee("dupont","andré",23,1800.5,5);
	Employee emp2("zuckerberg","mark",25,2800.5,10);
	Employee * emp3 = new Employee("deperois","david",23,3600.5,7);

	// Objet employees
	Employees * employees=new Employees();

	// ajout des employées
	employees->ajouter(*emp1);
	employees->ajouter(emp2);
	employees->ajouter(*emp3);


	// afficher tous les employées
	cout<<*employees<<endl;

	//afficher l'employée le plus ancien

	cout<<"L'employée le plus ancien:"<<employees->employee_plus_ancien();
	cout<<"L'employée le moins ancien:"<<employees->employee_moins_ancien();


	//trier les employées par ages
		cout<<"\nTrier les employées par age"<<endl;
		employees->trier_employee_par_age();
	// afficher tous les employées
		cout<<*employees<<endl;



	//trier les employées par salaire
		cout<<"\nTrier les employées par salaire"<<endl;
		employees->trier_employee_par_salaire();

	// afficher tous les employées
		cout<<*employees<<endl;

	//supprimer par id
		cout<<"\nSupprimer par id=3"<<endl;
		int id=3;
		employees->supprimer_par_id(id);

	// afficher tous les employées
	cout<<*employees<<endl;

	//supprimer par employée
	cout<<"\nSupprimer l'employée 1"<<endl;
	employees->supprimer_par_employee(*emp1);


	// afficher tous les employées
	cout<<*employees<<endl;


	return 0;
}
