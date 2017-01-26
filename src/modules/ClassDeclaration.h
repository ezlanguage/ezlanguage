#ifndef CLASSDECLARATION_H
#define CLASSDECLARATION_H

#include <string>
#include <vector>
#include <algorithm>
#include "Node.h"
#include "DeclarationFunction.h"
#include "Variable.h"

/**
 * @brief 
 * @author : Ismail ELFAQIR
 * 
 */
class ClassDeclaration :
        public Node {
	protected:

		std::string classname;
		// as the validate document of Houssam BENHOUD (les classes.pdf) all variables and functions of classes are public
		std::vector<DeclarationFunction *> public_functions;
		// here are the static functions
		std::vector<DeclarationFunction *> static_functions;
		std::vector<Variable *> public_variables;
	
	public:
	 
		/* * * * * * * * *
		* CONSTRUCTORS  *
		* * * * * * * * */
	
	
		/**
		* Default constructor
		* Set public_fuctions and variables to null
		* @author Ismail ELFAQIR
		*/
		ClassDeclaration();

		/**
		* Default constructor
		* Set the name of the class
		* @param name : class name
		* @author Ismail ELFAQIR
		*/
		ClassDeclaration(const std::string &name);

		/**
		* Constructor with parameters
		* Set the vectors of fuctions and variables by the parameters passed to the constructor
		* @param name : class name
		* @param functions : vector of functions
		* @param s_functions : vector of static functions
		* @param variables : vector of attributes
		* @author Ismail ELFAQIR
		*/
		ClassDeclaration(const std::string &name,
				     const std::vector<DeclarationFunction *> &functions, 
				     const std::vector<DeclarationFunction *> &s_functions,  
				     const std::vector<Variable *> &variables ); 

	
		/**
		* Constructor with parameters
		* Set the vectors of fuctions and variables by the parameters passed to the constructor
		* @param name : class name
		* @param functions : vector of functions
		* @param variables : vector of attributes
		* @author Ismail ELFAQIR
		*/
		ClassDeclaration(const std::string &name,
				     const std::vector<DeclarationFunction *> &functions, 
				     const std::vector<Variable *> &variables ); 
	
		/**
		* Constructor with parameters
		* Set only the vector of functions
		* @param name : class name
		* @param functions : vector of functions
		* @author Ismail ELFAQIR
		*/
		ClassDeclaration(const std::string &name, const std::vector<DeclarationFunction *> &functions);


		/**
		* Constructor with parameters
		* Set only the vector of variables 
		* @param name : class name
		* @param variables : vector of attributes
		* @author Ismail ELFAQIR
		*/
		ClassDeclaration(const std::string &name, const std::vector<Variable *> &variables);

		/**
		* Copy constructor
		* @param cpy : the class that we want to cpy to the actual class
		* @author Ismail ELFAQIR
		*/
		ClassDeclaration(const ClassDeclaration & cpy);
	
		/**
		* Destructor
		* @author Ismail ELFAQIR
		*/
		virtual ~ClassDeclaration();
	
		/* * * * * * * * * * * * * *
		* ACCESSORS  AND MUTATORS *
		* * * * * * * * * * * * * */

		/**
		* getter of class name
		* @author Ismail ELFAQIR
		*/
		const std::string & get_class_name() const;
	
		/**
		* getter of variables
		* @author Ismail ELFAQIR
		*/
		const std::vector<Variable *>&  get_variables() const;

		/**
		* getter of functions
		* @author Ismail ELFAQIR
		*/
		const std::vector<DeclarationFunction *>&  get_functions() const;

		/**
		* getter of static functions
		* @author Ismail ELFAQIR
		*/
		const std::vector<DeclarationFunction *>&  get_static_functions() const;

		/**
		* setter of class name
		* @param name : the name of this class
		* @author Ismail ELFAQIR
		*/
		void set_class_name(const std::string &name);
	
		/**
		* setter of variables
		* @param variables : vector of attributes
		* @author Ismail ELFAQIR
		*/
		void set_variable(const std::vector<Variable *>&variables);
	
		/**
		* setter of variables
		* @param functions : vector of functions
		* @author Ismail ELFAQIR
		*/
		void set_functions(const std::vector<DeclarationFunction *>&functions);

		/**
		* setter of variables
		* @param s_functions : vector of static functions
		* @author Ismail ELFAQIR
		*/
		void set_static_functions(const std::vector<DeclarationFunction *>&s_functions);

		/* * * * * *
		 * METHOD  *
		 * * * * * */

		/**
		 * @brief add an function to this class
		 * @param function : pointer to the function
		 * @author Ismail ELFAQIR
		 */
		
		void add_function(DeclarationFunction *function);

		/**
		 * @brief add an static function to this class
		 * @param function : pointer to the function
		 * @author Ismail ELFAQIR
		 */
		
		void add_static_function(DeclarationFunction *function);
		
		/**
		 * @brief add an attribute to this class
		 * @param variable : pointer to the variable
		 * @author Ismail ELFAQIR
		 */
		
		void add_variable(Variable * variable);

		/**
		 * @brief check if an function is in class
		 * @param function : pointer to the function
		 * @return boolean
		 * @author Ismail ELFAQIR
		 */
		
		bool is_in_class(DeclarationFunction * function);


		/**
		 * @brief check if an variable is in class
		 * @param variable : pointer to the variable
		 * @return boolean
		 * @author Ismail ELFAQIR
		 */
		
		bool is_in_class(Variable * variable);



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
		std::string translate() const;
};

#endif
