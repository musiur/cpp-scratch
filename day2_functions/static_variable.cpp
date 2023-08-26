// here I have noticed that
// variable var is not removing previous setted value

#include <iostream>
using namespace std;

void test()
{
    static int var = 0;
    ++var;

    cout << var << endl;
}

int main()
{
    test();
    test();
    test();
    test();

    return 0;
}