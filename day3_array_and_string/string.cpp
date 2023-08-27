#include <iostream>
#include <string>
using namespace std;

void PrintGreet(string greet)
{
    cout << greet << endl;
}

int main()
{

    string greet = "Hello world!";

    PrintGreet(greet);

    return 0;
}