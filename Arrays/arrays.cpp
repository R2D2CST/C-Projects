#include <iostream>

using namespace std;

int main()
{
    /*
    The arrays in C++ can be of any data type but can only be uniform (Only integers, only strings, etc)
    the compiler is smart to determine the size of an array if not specified.
    */
    int numbers[4]; // Initialize the variable array type and size.
    numbers[0] = 1;
    numbers[1] = 2;
    numbers[2] = 3;
    numbers[3] = 4; // Mind 4 is the size not the index.

    // By this way I can not declare de size of an array.
    string cars[] = {"volvo", "bmww", "ferrari", "ford"};

    // We c out our arrays.
    cout << numbers[0] << endl;
    cout << numbers[1] << endl;
    cout << numbers[2] << endl;
    cout << numbers[3] << endl;

    cout << cars[0] << endl;
    cout << cars[1] << endl;
    cout << cars[2] << endl;
    cout << cars[3] << endl;
};