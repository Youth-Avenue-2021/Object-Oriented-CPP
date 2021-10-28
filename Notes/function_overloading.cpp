// FUNCTION OVERLOADING IN CPP

/*
FUNCTION OVERLOADING(also known as METHOD OVERLOADING) is a feature of OOP. When we create two or more functions having same name but different parameters
then it is know as FUNCTION OVERLOADING. 

*/

#include <iostream>
using namespace std;

//Function with 1 parameter
int add(int a)
{
    return a;
}

// Function with 2 parameters
int add(int a, int b)
{

    return a + b;
}

//Function with 3 parameters
int add(int a, int b, int c)
{
    return a + b + c;
}

/* As we can see there are 3 functions with same but different parameters. All 3 functions return different values.
*/

int main()
{

    // To call function we just have to pass the arguments, compiler will know which function to execute.

    // Calling Function with 1 Parameter.
    cout << "Function with 1 Parameter (a): " << add(5) << "\n\n";

    // Calling Function with 2 Parameters.
    cout << "Function with 2 Parameters (a+b): " << add(5, 3) << "\n\n";

    // Calling Function with 3 Parameters.
    cout << "Function with 3 Parameters (a+b+c): " << add(5, 7, 9) << "\n\n";

    return 0;
}