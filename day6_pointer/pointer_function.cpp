#include <iostream>
using namespace std;

void SwapValues(int *var1, int *var2)
{
    int temp = *var1;
    *var1 = *var2;
    *var2 = temp;
}

int main()
{

    int value1 = 3, value2 = 4;

    SwapValues(&value1, &value2);

    cout << value1 << endl;
    cout << value2 << endl;
    return 0;
}