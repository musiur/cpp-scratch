#include <iostream>
#include <string>
using namespace std;

struct Student
{
    string name;
};

Student getStudentData(Student s)
{
    cin >> s.name;

    return s;
}

void PrintStruct(Student data)
{
    cout << data.name << endl;
}

int main()
{

    Student opu, temp;

    temp = getStudentData(opu);
    opu = temp;

    PrintStruct(opu);

    return 0;
}