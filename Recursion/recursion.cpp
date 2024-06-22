#include <iostream>

using namespace std;

int Fibonacci(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return Fibonacci(n - 2) + Fibonacci(n - 1);
    }
}

int main()
{
    for (int i = 0; i <= 8; i++)
        cout << Fibonacci(i);

    return 0;
}