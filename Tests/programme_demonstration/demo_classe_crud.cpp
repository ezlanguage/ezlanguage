//============================================================================
// Name        : Programme de démonstration EZL
// Author      : HOSSAM BENHOUD
// Version     :
// Copyright   : Your copyright notice
//============================================================================


/* LA CLASSE Employee  */

class Employee

        counter is shared integer = 0
_id is integer
        _nom is string
_prenom is string
        _age is integer
_salaire is real
        _anciennete is integer

/* la méthode qui va être appelée automatiquement après qu’un objet ait créé. Ce n’est pas un constructeur mais c’est un initialiseur */
__init__()

Employee.counter++
_id = Employee.counter

end init

/*cette procedure permet de faire une sortie d’affichage. Il est toutefois possible de le redéfinir dans une classe selon la sortie souhaitée.*/
procedure print()

print "  Id:"_id,"  Nom:",_nom , "  Prenom:" , _prenom , "  Age:",_age,"  Anciennete:",_anciennete,"  Salaire:",_salaire

        end procedure



        end class


/* LA CLASSE Employees  */

class Employees

/* vecteur des employées */
        _list is vector of Employee

/* cette procedure permet d'ajouter un employée*/
procedure ajouter(emp is Employee )
_list.put_first(emp)
end procedure


/*cette procedure permet de modifier un employée*/
procedure modifier(emp is Employee)

for i in _list.range()

if _list[i]._id == emp._id then
_list[i]=emp
        end if
end for
end procedure


/*Cette procedure permet de supprimer un employée*/
procedure supprimer_par_employee(emp is Employee)

for i in _list.range()

if _list[i]._id == emp._id then

_list.remove(i)
end if
end for
end procedure

/*cette procedure permet de supprimer un employée par id*/
procedure supprimer_par_id(id is integer)

for i in _list.range()

if _list[i]._id == id then

_list.remove(i)
end if
end for
end procedure

/*cette fonction permet de retourner l'employée le plus ancien*/
function employee_plus_ancien() return Employee

if _list.size() > 0 then

        Employee emp=_list[0]

for i in _list.range()

if _list[i]._anciennete > emp._anciennete then

emp = _list[i]

end if

end for

return emp

        end if

end function



/*cette fonction permet de retourner l'employée le moins ancien*/
function  employee_moins_ancien() return Employee

if _list.size()>0 then

        Employee emp=_list[0]

for i in _list.range()

if _list[i]._anciennete < emp._anciennete then

emp = _list[i]

end if

end for

return emp

        end if

end function


/*cette procedure permet de trier les employées par age*/
procedure trier_employee_par_age()

_list.sort(_age)

end procedure

/*cette procedure permet de trier les employées par salaire*/
procedure trier_employee_par_salaire()

_list.sort(_salaire)
end procedure


/*cette procedure permet de faire une sortie d’affichage. Il est toutefois possible de le redéfinir dans une classe selon la sortie souhaitée.*/
procedure print()

for i in _list.range()
print _list[i]
end for

end procedure





end class


/* LA CLASSE MAIN  */

        program main

procedure main()


// déclaration des employées
emp1 is Employee
        emp1._nom="dupont"
emp1._prenom="andré"
emp1._age=23
emp1._anciennete=5
emp1._salaire=1800

emp2 is Employee
        emp2._nom="zuckerberg"
emp2._prenom="mark"
emp2._age=25
emp2._anciennete=10
emp2._salaire=2800.5

emp3 is Employee
        emp3._nom="deperois"
emp3._prenom="david"
emp3._age=23
emp3._anciennete=7
emp3._salaire=3600.5


// Objet employees
employees is Employees

// ajout des employées
        employees.ajouter(emp1)
employees.ajouter(emp2)
employees.ajouter(emp3)


// afficher tous les employées
employees.print()

//afficher l'employée le plus ancien

print "L'employée le plus ancien:",employees.employee_plus_ancien()
print "L'employée le moins ancien:",employees.employee_moins_ancien()


//trier les employées par ages
print "\nTrier les employées par age"
employees.trier_employee_par_age()

// afficher tous les employées
employees.print()


//trier les employées par salaire
print "\nTrier les employées par salaire"
employees.trier_employee_par_salaire()

// afficher tous les employées
employees.print()

//supprimer par id
id is integer = 3
print "\nSupprimer par id = ",id
        employees.supprimer_par_id(id)

// afficher tous les employées
employees.print()

//supprimer par employée
print "\nSupprimer l'employée 1"
employees.supprimer_par_employee(emp1)


// afficher tous les employées
employees.print()




end procedure
