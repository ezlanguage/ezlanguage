# Rules for the test code (use `make check` to execute)
TESTS = globalTest
check_PROGRAMS = $(TESTS)
globalTest_SOURCES = TesterRunner.cpp arraytest.h ../../src/modules/ArrayDeclaration.cpp ../../src/modules/Node.cpp ../../src/hash_table/Variable.cpp ../../src/hash_table/HashElement.cpp
globalTest_CXXFLAGS = $(CPPUNIT_CFLAGS) -std=c++11
globalTest_LDFLAGS = $(CPPUNIT_LIBS)
