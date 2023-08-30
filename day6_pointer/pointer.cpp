#include <iostream>
using namespace std;

int main()
{
    int *address, var;

    var = 5;
    address = &var;

    cout << *address << endl;

    *address = 10;

    cout << var << endl;
    return 0;
}