#include <iostream>
using namespace std;

class A {
    public:
        void print(){
            cout << "Hello" << endl;
        }
};

class B: public A {};
class C: public B {};

int main(){
    C a;
    a.print();
    return 0;
}