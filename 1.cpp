// C++ Tutorial

//This is single line Comment

/* This is a 
Multi line Comment */

//C++ is a Case Sensitive Language

/* Commands:
a) For Compilation: g++ fileName with Extension
b) For Execution: ./a.exe --> (Windows)
                  ./a.out --> (Mac & Linux) */

#include <iostream> 
/* This is preprocessor directive, Preprocessor directives in C++ are commands that 
begin with the # symbol, and they’re processed before the actual compilation begins. */

using namespace std;
/* cout is not unique i.e., if we have multiple files having multiple cout statements then C++ compiler gets confused, 
in order to avoid that we use a namespace called std. */

int main(){
    cout << "Hello World! I'm Sarvan Kumar"; // This is the output Statement.
    return 0; //As the function needs to return an integer value we use this statment.
}
