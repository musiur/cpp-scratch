#include <iostream>
using namespace std;

int main()
{
    int a = 3;

    //      3 + 1+3 = 7 ? But I got 8 Here in console
    cout << a + ++a << endl;
    cout << a << endl; // 4

    return 0;
}