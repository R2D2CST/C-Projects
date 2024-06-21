#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    bool condition = true;
    string escape;
    while (condition == true)
    {
        cout << "Now we are inside a never ending loop o.O (screams out loud.)" << endl;
        cout << "Type exit in order to escape: ";
        cin >> escape;
        if (escape == "exit")
        {
            condition = false;
            cout << endl
                 << "Escaping loop goodbye ...";
        }
        else
        {
            cout << "Try 'exit' to escape...";
        }
    }

    return 0;
}
