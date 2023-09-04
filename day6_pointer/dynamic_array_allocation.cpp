#include <iostream>
using namespace std;

int main()
{

    double *nums;
    nums = new double[5];

    for (int i = 0; i < 5; i++)
    {
        cin >> *(nums + i);
    }

    for (int i = 0; i < 5; i++)
    {
        cout << *(nums + i) << endl;
    }

    delete[] nums;

    return 0;
}