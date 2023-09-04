#include <iostream>
#include <string>
using namespace std;

class Person {
    public:
        string name;
        int age;

        Person(): name("Musiur Alam Opu"), age(20) {}

        void getDetails() {
            cout << "Name: " << name << " and age: " << age << endl;
        }

};

int main(){

    Person* ptr = new Person();

    ptr -> getDetails();

    delete ptr;

    return 0;
}