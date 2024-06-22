#include <iostream>

using namespace std;

/* Character Length Ruler
0000000000111111111122222222223333333333444444444455555555556666666666777777777788888888889999999999
0123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789 */

/*
Overloading is a functionality where we can define several times a function in C++ with
different data types.
*/
void print(char a)
{
    cout << a << endl;
}

void print(string a)
{
    cout << a << endl;
}

void print(int a)
{
    cout << a << endl;
}

void print(float a)
{
    cout << a << endl;
}

void print(double a)
{
    cout << a << endl;
}

void print(bool a)
{
    cout << a << endl;
}

int main(int argc, char const *argv[])
{
    // Now in main We will try out to use the same function for several variable types.
    int int_var = 123;
    float float_var = 12.123;
    double double_var = 12.123123123;
    char char_var = 'a';
    string string_var = "string";
    bool bool_var = true;

    // Now instead of having to remember several functions names we can use the same function name.
    print(int_var);
    print(float_var);
    print(double_var);
    print(char_var);
    print(string_var);
    print(bool_var);

    return 0;
}
