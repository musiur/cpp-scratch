#include <iostream>
// #include <string>
using namespace std;

int main()
{

    int number{-1};

    switch (number)
    {
    case 2:
        cout << "GREATER" << endl;
        break;
    case -1:
        cout << "SMALLER" << endl;
        break;
    case 0:
        cout << "ZERO" << endl;
        break;
    default:
        cout << "UNDEFINED" << endl;
        break;
    }

    return 0;
}