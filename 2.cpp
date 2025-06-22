// Variables, Datatypes, TypeConversion, TypeCasting, Inputs, Operators in C++

/* Variable Naming rules:
a) Can only contain letters, digits and underscore (_)
b) Must begin with a letter or a underscore
c) Cannot be any Keyword
d) Case-sensitive
e) No Whitespaces or hyphens in between */

// The name given for variable is called as identifier in C++

// 8 bits = 1 byte

// Datatypes:
// int - 4 bytes (32 bits) storage
// char - 1 byte (8 bits) storage
// float - 4 bytes (32 bits) storage
// bool - 1 byte (8 bits) storage
// double - 8 bytes (64 bits) storage

#include <iostream>
using namespace std;

int main()
{

    int age = 25; // age is called as identifier in C++
    char name = 'a';
    float PI = 3.14f; // f is used to let the compiler know that we are declaring a floating point number but not a double
    bool isTrue = false;
    double price = 100.99;

    // Type Conversion
    char grade = 'A'; // ASCII: 65
    int value = grade;
    cout << value << endl; // Prints 65 as a result of implicit type conversion
    cout << grade << endl; // Prints A

    // Type Casting (Big datatype --> Small Datatype in terms of storage)
    double rate = 100.99;
    int newRate = (int)rate;
    cout << newRate << endl; // Prints 100

    // Input
    int bullets;
    cout << "Enter Number of Bullets needed: ";
    cin >> bullets;
    cout << bullets << endl;

    // Arithmetic Operators
    int a = 12;
    int b = 14;

    cout << "Sum:" << (a + b) << endl;
    cout << "Difference:" << (a - b) << endl;
    cout << "Product:" << (a * b) << endl;
    cout << "Quotient:" << (a / double(b)) << endl; // Used double to avoid integer division 
    cout << "Remainder:" << (a % b) << endl;

    // Relational Operators
    cout << "Is a equal to b? " << (a == b) << endl;
    cout << "Is a not equal to b? " << (a != b) << endl;
    cout << "Is a greater than equal to b? " << (a >= b) << endl;
    cout << "Is a lesser than equal to b? " << (a <= b) << endl;
    // Similar for < and > also.

    // Logical Operators - ||, &&, !
    cout << "Is a equal to b? " << !(a == b) << endl;

    // Unary Operators ++ & --
    cout << a++ << endl;
    cout << b-- << endl;

    return 0;
}

