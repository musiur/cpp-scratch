#include <iostream>

using namespace std;

int main()
{

    int arr[3];

    int *address;

    address = arr;

    for (int i = 0; i < 3; i++)
    {
        cin >> *(address + i);
    }

    for (int i = 0; i < 3; i++)
    {
        cout << *(address + i) << endl;
    }

    return 0;
}
