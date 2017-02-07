#ifndef ARRAYTEST_H
#define ARRAYTEST_H

#include "../../src/modules/ArrayDeclaration.h"
#include <cppunit/TestCase.h>

/*
 * This is a simple test case, to prove that the class Array works (or at least still works)
 * */
class ArrayTest : public CppUnit::TestCase {

protected:
    ArrayDeclaration *_array;
    const int END_BORNE = 2;
    
public:
    /**
     * initialize the variables
     * */
    void setUp();

    /**
     * release any permanent resources you allocated in setUp()
     * */
    void tearDown();

    /**
     * In the end, you'll have like a menu, with colors (red & green) showing what failled & what succeded
     * */
    void testConstructor();

};

#endif
