#include <iostream>
#include <string>
using namespace std;

class Father
{
public:
    string first_name;
    string last_name;

    Father(){};

    Father(string firstName, string lastName)
    {
        first_name = firstName;
        last_name = lastName;
    };

    void getFullName()
    {
        cout << first_name << " " << last_name << endl;
    }
};

class Child : Father
{
public:
    string first_name;
    string last_name;
    int age = 23;

    Child(string firstName, int newAge)
    {
        first_name = firstName;
        age = newAge;
    };

    void getDetails()
    {
        cout << first_name << " " << last_name << " is " << age << " years old." << endl;
    }
};

int main()
{
    Father murshidul("Murshidul", "Alam");
    Child opu("\nMusiur", 23);
    opu.last_name = murshidul.last_name;
    cout << "Father: ";
    murshidul.getFullName();
    cout << "\nChild: ";
    opu.getDetails();
    cout << endl;
}