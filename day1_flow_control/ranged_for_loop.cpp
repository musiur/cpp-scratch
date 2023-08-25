/**
 * Here I have learned
 * ------------------------
 * used array
 * for loop
 * ranged for loop
 * break statement
 * continue statemenet
 * goto statement
 *
 */

#include <iostream>
using namespace std;

int main()
{
    int numbers[] = {1, 2, 3, 4, 5};

    for (int n : numbers)
    {
        if (n == 3)
            continue;
        else if (n == 4)
            goto printHello;
        else if (n == 5)
            break;
        else
            cout << n << endl;
    }

printHello:
    cout << "Hello!" << endl;

    return 0;
}
