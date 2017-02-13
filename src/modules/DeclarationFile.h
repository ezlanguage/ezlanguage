

#ifndef DECLARATIONFILE_H
#define DECLARATIONFILE_H

#include <string>
#include "Node.h"
#include "../hash_table/Variable.h"

class DeclarationFile : public Node
{
   
  public:

    /* * * * * * * * *
    * CONSTRUCTORS  *
    * * * * * * * * */


    DeclarationFile(Variable *, std::string);

    virtual ~DeclarationFile();



    Variable * get_variable() const;

    std::string get_path() const;

    void set_variable(Variable *);

    void set_path(std::string);


    std::string get_filename() const; 



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

  private:
    Variable *var;
    std::string path;
};

#endif // DECLARATIONFILE_H
