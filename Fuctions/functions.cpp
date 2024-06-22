#include <iostream>

using namespace std;

// This fu function returns the size of a given character.
char print_char(char a)
{
    /*
    This function returns the size of a character argument given.
    */
    cout << "Character " << a << " size is : " << sizeof(a) << endl;
    return 'A';
}

int main()
{
    // We define and initialize a character variable.
    char char_var = 'a';

    // We print out the value of the character.
    cout << "variable char_var value: " << char_var << endl;

    // We execute the print_char function by calling the function.
    char_var = print_char(char_var);

    // We print out the value of the character after the function has been called.
    cout << "variable char_var value: " << char_var << endl;

    return 0;
}