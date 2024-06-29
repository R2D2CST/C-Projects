#include <iostream>

using namespace std;

int main()
{
    int num = 5;
    int sum = 0;

    do
    {
        if (num % 2 == 0)
        {
            sum += num;
        }
        num--;
    } while (num >= 0);

    cout << sum;
    return 0;
}
