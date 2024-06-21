#include <iostream>

using namespace std;

/*
application intended to learn if, if else, and switch. This are teh main flow controllers in
c++ language.
*/
int main(int argc, char const *argv[])
{
    // We declare a and b as integers  variables;
    int a, b;

    // We initialize a and b variables.
    a = 5;
    b = 5;

    // Now er can do declaration and initialization in the same command line.
    int sum = a + b;

    // In order tu print out we use cout from the <iostream> library.
    // endl is end of line == '\n'.
    cout << "The sum of " << a << "and " << b << "is " << sum << endl;

    // Now we will try out our first if statement.
    if (a == 5)
    {
        cout << "the variable a is equal to 5." << endl;
        cout << "We are inside the if statement.";
    }

    // First if evaluates if something is true, if not continues the else if to be true.
    if (a != 5)
    {
        cout << "Something went wrong.";
        cout << "A is must be equal to 5.";
    }
    else if (a == b)
    {
        cout << "Yes a is equal to b" << endl;
        cout << "now we are inside and else if statement." << endl;
    }

    // Else statement.
    if (a == 4)
    {
        cout << "Not true." << endl;
    }
    else if (b == 4)
    {
        cout << "Also not true" << endl;
    }
    else
    {
        cout << "We are inside the else statement none if or else if where true." << endl;
    }

    // Switch statement.
    switch (a)
    {
    case 5:
        cout << "Yes a is equal to 5 and we did not put some brake" << endl;
    case 4:
        cout << "This line will be printed due no break before." << endl;
        break;
    case 3:
        cout << "No a is not equal to 3" << endl;
        break;
    default:
        cout << "If no case was tru this goes out" << endl;
        break;
    }

    return 0;
}