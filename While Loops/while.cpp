#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    /*
    Now wi will make a while and a do while loop, the whiles loop first evaluates a condition to be true,
    if this condition is found true it executes a procedure. While the do while will always execute once the
    code given and repeats itself while condition is found true.
    */

    int number, elevation, while_counter, do_counter;
    cout << "Hello, please type an integer number: ";
    cin >> number;
    cout << endl;

    cout << "how many times would you like to elevate this number";
    cin >> elevation;
    cout << endl;

    // The wile loop will execute the curly braces instructions if condition is true.
    while_counter = elevation;
    int product_result = 0;
    while (while_counter > 0)
    {
        product_result += number;
        while_counter--;
        cout << "Iteration while: " << while_counter << "Product result = " << product_result << endl;
    }

    int result = 0;
    do_counter = 0;
    do
    {
        result += number;
        do_counter++;
        cout << "Iteration do while: " << do_counter << "Result = " << result << endl;
    } while (do_counter < elevation);

    return 0;
}
