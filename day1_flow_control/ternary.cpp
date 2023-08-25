#include <iostream>
#include <string>
using namespace std;

int main()
{
    int number{-8};

    string result = (number == 0) ? "ZERO" : ((number > 0) ? "GREATER" : "SMALLER");
    cout << result << endl;

    return 0;
}