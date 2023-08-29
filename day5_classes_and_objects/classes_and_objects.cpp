#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
    string name;
    int age;

    void printInfo()
    {
        cout << name << " is " << age << " years old" << endl;
    };
};

int main()
{

    Student OPU;
    OPU.name = "Musiur Alam Opu";
    OPU.age = 10;
    OPU.printInfo();
    return 0;
}