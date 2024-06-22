#include <iostream>

using namespace std;

int main()
{
    /*
    Now we will be practicing with reference and pointers, pointers are memory saving places
    that store the memory location of another variable it's value is a memory location. When called
    we get the memory location stored in them and the value of the original memory location.
    */

    // Declare and initialize a variable a.
    int a = 5;
    // Declare and initialize a pointer variable b to a.
    int *b;
    b = &a;

    cout << "Variable a value: " << a << ", variable a address: " << &a << endl;
    cout << "Variable b value: " << b << ", variable b address: " << &b << endl;
    cout << "pointer b is equal to a value (*b = a ): " << *b << endl;
    cout << endl;

    a = 10;

    cout << "Variable a value: " << a << ", variable a address: " << &a << endl;
    cout << "Variable b value: " << b << ", variable b address: " << &b << endl;
    cout << "pointer b is equal to a value (*b = a ): " << *b << endl;
    cout << endl;

    int c = 3;
    int &d = c;

    cout << "Variable c value: " << c << ", variable c address: " << &c << endl;
    cout << "Variable d value: " << d << ", variable d address: " << &d << endl;

    return 0;
}
