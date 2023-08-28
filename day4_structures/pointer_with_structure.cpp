#include <iostream>
#include <string>

using namespace std;

struct Student
{
    string name;
};

int main()
{

    Student *ptr, opu;

    ptr = &opu;

    cin >> (*ptr).name;
    cout << (*ptr).name << endl;

    return 0;
}