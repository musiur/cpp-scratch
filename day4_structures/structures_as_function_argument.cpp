#include <iostream>
#include <string>
using namespace std;
struct student
{
    string name;
    int age;
    int roll;
    string department;
};

void printStructure(student opu)
{
    cout << "Name " << opu.name << endl;
    cout << "Age " << opu.age << endl;
    cout << "Roll " << opu.roll << endl;
    cout << "Department " << opu.department << endl;
}
int main()
{

    student opu;
    opu.name = "Musiur Alam Opu";
    opu.age = 23;
    opu.roll = 10;
    opu.department = "Computer Science";

    printStructure(opu);

    return 0;
}