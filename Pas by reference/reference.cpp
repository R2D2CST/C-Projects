#include <iostream>

using namespace std;

// Normal variable passing we create new memory spaces for this operations.
int sum_normal(int a, int b, int sum)
{
    sum = a + b;
    cout << sum << endl;
}

// We use the same memory spaces for the operations.
int sum_ref(int &a, int &b, int &sum)
{
    sum = a + b;
    cout << sum << endl;
}

int main()
{
    // We define and initialize the variables.
    int a = 123;
    int b = 321;
    int sum = 0;

    cout << "Before:" << endl;
    cout << "Variable a" << a << endl;
    cout << "Variable b" << b << endl;
    cout << "Variable sum" << sum << endl;

    sum_normal(a, b, sum);
    sum_ref(a, b, sum);

    cout << "Before:" << endl;
    cout << "Variable a" << a << endl;
    cout << "Variable b" << b << endl;
    cout << "Variable sum" << sum << endl;

    return 0;
}
