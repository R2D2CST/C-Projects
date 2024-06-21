#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    /* Now we will build a for loop in our program
    In this for loop we will be adding a number given times.
    */

    // We ask the user to type a round number.
    int number;
    cout << "Please type a round number: ";
    cin >> number;

    // Then we ask for the times we want to elevate that number.
    cout << "\n¿How many times do you wish to elevate the number?" << endl;
    int elevation;
    cout << "Please enter a round number: ";
    cin >> elevation;

    /*Now we start a for loop to elevate the number given times.
    i will be a integer number that starts in 0, can start in whatever value you
    give.
    Then if i is less than 10 will execute the code with in the curly braces.
    after that will increase in one (++i).
    if value is greater than 9 will break the for loop.
    */
    int result = 0;
    for (int i = 0; i < elevation; i++)
    {
        result += number;
        cout << "Iteration No." << i << " : Number value is:" << result << endl;
    }

    return 0;
}
