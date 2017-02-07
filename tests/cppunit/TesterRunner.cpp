#include <iostream>
#include <stdlib.h>

#include <cppunit/TestCaller.h>
#include <cppunit/TestResult.h>

#include "arraytest.h"

int main(int argc,char **argv){

    CppUnit::TestCaller<ArrayTest> test( "testConstructor",&ArrayTest::testConstructor );
    CppUnit::TestResult result;
    test.run( &result );

    return EXIT_SUCCESS;
}

