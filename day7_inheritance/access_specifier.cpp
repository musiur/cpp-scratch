#include <iostream>
using namespace std;

class Base
{
public:
    int age = 5;

protected:
    int id = 2;
private:
    int roll = 3;
};

class PublicAccessor : public Base
{
public:
    void printAge()
    {
        cout << age << id << endl;
    }
};

class ProtectedAccessor : protected Base
{
public:
    void printId()
    {
        cout << id << endl;
    }
};

// class PrivateAccessor: private Base {
//     private:
//         void printRoll(){
//             cout << roll << endl;
//         }
// }

int main()
{
    PublicAccessor accessor1;
    accessor1.printAge();
    ProtectedAccessor accessor2;
    accessor2.printId();
    return 0;
}