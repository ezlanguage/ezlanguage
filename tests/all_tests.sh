#!/bin/bash

# Execute tests
echo "Test 1 : exemple" 
../bin/EZ_language_compiler exemple.ez
echo "Test 2 : person" 
../bin/EZ_language_compiler person.ez
echo "Test 3 : julia" 
../bin/EZ_language_compiler julia.ez

