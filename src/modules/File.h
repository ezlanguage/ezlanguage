#ifndef FILE_H
#define FILE_H

#include <iostream>
#include "Node.h"
#include "DeclarationFile.h"

/**
 * @class File
 * @brief Class use to translate files from eazylang to c++
 * 
 * @author LAHYANI Zakaria
 */

class File
{
  public:
    

    /**
    * Enum type to help in the translation
    *
    * @author LAHYANI Zakaria
    */
    enum Method
    {
       IS_FILE,
       IS_DIRECTORY,
       MAKE_DIRECTORY,
       OPEN,
       IS_EMPTY,
       GET_TEXT,
       GET_TEXT_WITH_ARGS,
       GET_TEXT_REGEX,
       GET_NBR_LINES,
       GET_LINE_ARGG_NUMBER,
       WRITE,
       SIZE,
       CLOSE
    };
	Method method;


    /* * * * * * * * *
    * CONSTRUCTORS  *
    * * * * * * * * */
		

    /**
    * Minimal constructor Takes only the path
    * 
    * @param : path to file 
    *
    * @author LAHYANI Zakaria
    */
    File(DeclarationFile * ,std::string);


    /**
    * Destructor
    * @author LAHYANI Zakaria
    */    
    virtual ~File();



    /* * * * * * * * * * * * * *
    * ACCESSORS  AND MUTATORS *
    * * * * * * * * * * * * * */


    /**
    * getter of the path
    *
    * @author LAHYANI Zakaria
    */
    std::string get_path() const;


    /**
    * getter of the begining
    *
    * @author LAHYANI Zakaria
    */
    std::string get_begin() const;


    /**
    * getter of the end
    *
    * @author LAHYANI Zakaria
    */
    std::string get_end() const;


    /**
    * getter of the pattern
    *
    * @author LAHYANI Zakaria
    */
    std::string get_pattern() const;


    /**
    * getter of the delimeter
    *
    * @author LAHYANI Zakaria
    */
    std::string get_delimeter() const;


    /**
    * getter of the content
    *
    * @author LAHYANI Zakaria
    */
    std::string get_content() const;


    /**
    * getter of the line number
    *
    * @author LAHYANI Zakaria
    */
    int get_line_number() const;


    /**
    * setter of path
    *
    * @param v : path of file
    * @author LAHYANI Zakaria
    */
    void set_path(std::string);


    /**
    * setter of begin
    *
    * @param v : begin of content
    * @author LAHYANI Zakaria
    */
    void set_begin(std::string);


    /**
    * setter of end
    *
    * @param v : end of content
    * @author LAHYANI Zakaria
    */
    void set_end(std::string);


    /**
    * setter of pattern
    *
    * @param v : patterrn
    * @author LAHYANI Zakaria
    */
    void set_pattern(std::string);


    /**
    * setter of delimeter
    *
    * @param v : the delimetter
    * @author LAHYANI Zakaria
    */
    void set_delimeter(std::string);


    /**
    * setter of content
    *
    * @param v : content to write to file
    * @author LAHYANI Zakaria
    */
    void set_content(std::string);


    /**
    * setter of pattern
    *
    * @param v : patterrn
    * @author LAHYANI Zakaria
    */
    void set_line_number(int);



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
    DeclarationFile *file;
    std::string path;
    std::string begin;
    std::string end;
    std::string pattern;
    std::string delimeter;
    std::string content;
    int line_number;
};

#endif // FILE_H