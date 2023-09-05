#include <iostream>
using namespace std;

class A
{
public:
    void printA()
    {
        cout << "A" << endl;
    }
};

class B
{
public:
    void printB()
    {
        cout << "B" << endl;
    }
};
class C : public B, public A
{
};

int main()
{
    C a;
    a.printA();
    a.printB();
    return 0;
}