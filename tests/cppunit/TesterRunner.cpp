#include <iostream>
#include <stdlib.h>
#include "arraytest.h"
#include <cppunit/TestCaller.h>
#include <cppunit/TestResult.h>

int main(int argc,char **argv){

    CppUnit::TestCaller<ArrayTest> test( "testConstructor",&ArrayTest::testConstructor );
    CppUnit::TestResult result;
    test.run( &result );

    return EXIT_SUCCESS;
}

