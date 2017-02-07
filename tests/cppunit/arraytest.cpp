#include "arraytest.h"

#include "../../src/modules/ArrayDeclaration.h"
#include "../../src/modules/PDVariables.h"

void ArrayTest::setUp(){
        // arbitrary choice
        _array = new ArrayDeclaration(new Variable("test","string",true),END_BORNE);
}

void ArrayTest::tearDown(){
        delete _array;
}

void ArrayTest::testConstructor() {
    CPPUNIT_ASSERT( _array->get_size() == END_BORNE);
    CPPUNIT_ASSERT( _array->get_variable()->get_type() == "string" );
}
