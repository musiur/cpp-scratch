#include <iostream>
using namespace std;

int main()
{
    int initial = 0;
    int secondInitial = 1;
    int next = initial + secondInitial;

    cout << endl
         << endl
         << initial << ", "
         << secondInitial;

    while (secondInitial < 50)
    {
        next = initial + secondInitial;
        cout << ", " << next;
        initial = secondInitial;
        secondInitial = next;
    }

    cout << endl
         << endl;

    return 0;
}