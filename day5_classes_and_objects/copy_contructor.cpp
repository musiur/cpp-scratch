#include <iostream>
#include <string>

using namespace std;

class Student
{
public:
    string name;
    int age;

    Student(string newname, int newage)
    {
        name = newname;
        age = newage;
    }

    Student(Student &studentObject)
    {
        name = studentObject.name;
        age = studentObject.age;
    }

    void PrintData()
    {
        cout << name << " is " << age << " years old" << endl;
    }
};

int main()
{
    Student Opu = Student("Musiur Alam Opu", 20);
    Student Rahik = Student(Opu);

    Rahik.PrintData();

    return 0;
}