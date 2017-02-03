#ifndef DECLARATIONLIST_H
#define DECLARATIONLIST_H


#include <vector>
#include <iostream>
#include "../hash_table/Variable.h"
#include "Node.h"
#include "DeclarationContainer.h"

/**
 * @class DeclarationList
 * @brief Class representing list's data structer declarations
 * 
 * @author LAHYANI Zakaria
 */

class DeclarationList : public Node, DeclarationContainer
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
        DeclarationList(Variable *);

		/**
		* Constructor Takes the container variable, name and its size
		* 
		* @param : variable 
		* @param : size
		*
		* @author LAHYANI Zakaria
		*/
        DeclarationList(Variable *,  int);

        /**
		* Constructor Takes the container variable, name and its initial values
		* 
		* @param : variable 
		* @param : intial values
		*
		* @author LAHYANI Zakaria
		*/
        DeclarationList(Variable *, std::vector<std::string>);

        /**
		* Copy COnstructor 
		*  
		* @param : container Container 
		* 
		* @author LAHYANI Zakaria
		*/
		DeclarationList(const DeclarationList& );



		
		/* * * * * * * *
		* Translation  *
		* * * * * * * **/
		

		/**
		 * @brief Translation of the instruction into it's C++ counterpart
		 * @return a string containing the C++ code of the declaration
		 * 
		 * The instance will be translated with it's C++ equivalent using its informations
		 * The translation corresponds to its specifications, specificities and values
		 */
		virtual std::string preTranslate() const;

};

#endif // DECLARATIONLIST_H
