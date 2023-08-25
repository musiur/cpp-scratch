#include <iostream>
using namespace std;

int main()
{

    int number{5};

    do
    {
        cout << number << endl;
        number--;
    } while (number > 0);

    while (number < 5)
    {
        cout << number << endl;
        number++;
    }

    return 0;
}