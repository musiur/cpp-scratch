#include <iostream>
#include <string>
using namespace std;

int main()
{

    struct student
    {
        string name;
        int age;
        int roll;
        string department;
    };

    student opu;
    opu.name = "Musiur Alam Opu";
    opu.age = 23;
    opu.roll = 10;
    opu.department = "Computer Science";

    cout << "Name " << opu.name << endl;
    cout << "Age " << opu.age << endl;
    cout << "Roll " << opu.roll << endl;
    cout << "Department " << opu.department << endl;

    return 0;
}