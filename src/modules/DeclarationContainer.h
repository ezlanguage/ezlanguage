#ifndef DECLARATIONCONTAINER_H
#define DECLARATIONCONTAINER_H

#include <vector>
#include <iostream>

#include "../hash_table/Variable.h"


class DeclarationContainer 
{
   
 	public:


		/* * * * * * * * *
		* CONSTRUCTORS  *
		* * * * * * * * */
		

    	/**
		* Minimal constructor Takes the container type, and name (its name)
		* 
		* @param : variable 
		*
		* @author LAHYANI Zakaria
		*/
        DeclarationContainer(Variable *);

		/**
		* Constructor Takes the container variable, name and its size
		* 
		* @param : variable 
		* @param : size
		*
		* @author LAHYANI Zakaria
		*/
        DeclarationContainer(Variable *,  int);

        /**
		* Constructor Takes the container variable, name and its initial values
		* 
		* @param : variable 
		* @param : intial values
		*
		* @author LAHYANI Zakaria
		*/
        DeclarationContainer(Variable *, std::vector<std::string>);

        /**
		* Copy COnstructor 
		*  
		* @param : container Container 
		* 
		* @author LAHYANI Zakaria
		*/
		DeclarationContainer(const DeclarationContainer& );

		/**
		* Destructor
		* @author LAHYANI Zakaria
		*/
        virtual ~DeclarationContainer();



        /* * * * * * * * * * * * * *
		* ACCESSORS  AND MUTATORS *
		* * * * * * * * * * * * * */


        /**
		* getter of Variable
		*
		* @author LAHYANI Zakaria
		*/
		Variable * get_variable() const;

		/**
		* getter of container's type
		*
		* @author LAHYANI Zakaria
		*/
		std::string get_type() const;

		/**
		* getter of container's initial values
		*
		* @author LAHYANI Zakaria
		*/
		std::vector<std::string> get_initializer() const;

		/**
		* getter of container's size
		*
		* @author LAHYANI Zakaria
		*/
		int get_size() const;


		/**
		* setter of variable
		*
		* @param v : the Variable of the container
		* @author LAHYANI Zakaria
		*/
		void container_variable(Variable *);


		/**
		* setter of the initializer
		*
		* @param v : initial values of the container
		* @author LAHYANI Zakaria
		*/
		void container_initializer(std::vector<std::string>);

		/**
		* setter of container's size
		*
		* @param v : initial values of the container
		* @author LAHYANI Zakaria
		*/
		void container_size(int);


    protected:
		Variable *var;
    	int size;
    	std::vector<std::string> initializer;
};

#endif // DECLARATIONCONTAINER_H
