#include <iostream>
using namespace std;

void greet(); // prototype

// main function
int main()
{
    greet(); // function call

    return 0;
}

// function defination
void greet()
{
    cout << "Hello!" << endl;
}