//
// These are notes in C++
//
//
//  Created by Aviv Shalit on 25/07/2022.
//

#include "main2.hpp" // This is how to use headers which includes libraries, alias (an alternative and usually easier-to-understand or more significant name for a defined data object), and sometimes also functions

#include<iostream> // Allows to use std:cin or std:cout. contains all the functions responsible for your input and output
#include<string> // is a string class. String class defines a number of functionalities that allow manifold operations on strings.
#include<sstream> // is a Stream Class to Operate on strings. The stringstream class Implements the Input/Output Operations on Memory Bases streams i.e. string:
#include<cmath> // declares a set of functions to compute common mathematical operations and transformations



using namespace std; // Allows to not writing "std::" explicitly. For example: "std::cout<< "Hello World /n", should now be replaced with "cout<< "Hello World /n"

/*
    

     Incrementing

     prefix: ++a
     postfix: a++
     Decrementing

     prefix: --a
     postfix: a--
     The difference between prefix and postfix is subtle, but crucial.

     Prefix operators increment the value of the variable, then return the reference to the variable.

     Postfix operators create a copy of the variable and increments the value of the variable. Then it returns a copy from BEFORE the increment.
     
    
     
 
 
 
     There are three logic operators in C++:
     - and &&
     - or ||
     - not !

     There are two Boolean values:
     True = 1
     False = 0



 
     if(boolean expression)
     {
          //statements to execute if the boolean expression is true
     }
     else if (boolean expression #2)
     {
          //statements to execute if the 'else if' boolean expression  #2 is true
     }

     else
     {
          //statements to execute if the boolean expressions
         //'if' and 'else if'  are false
     }
 
 
 
     switch(expression)
     {
          case constant-expression : statements;
                                    break; (this is optional);
          case constant-expression : statements;
                                    break; (this is optional);
          ...

          default : //optional
             statements;
     }


 */

