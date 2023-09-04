#include <iostream>
using namespace std;

int main()
{

    int *ptrVar;

    ptrVar = new int;

    *ptrVar = 5;

    cout << *ptrVar << endl;

    delete ptrVar;

    return 0;
}