#include <iostream>
#include <string>
using namespace std;

class A
{
public:
    string greet{"Hello"};

    friend void print(A);
};

void print(A a)
{
    cout << a.greet << endl;
}

int main()
{
    A a;
    print(a);
    return 0;
}