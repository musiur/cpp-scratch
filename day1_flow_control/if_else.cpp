#include <iostream>
#include <string>
using namespace std;

int main()
{
    int number{500};
    // new thing I have learned
    // instead of doing this
    if (number > 300)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    // i can do this
    if (number > 300)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    // even more with ternery operator
    string result = number > 800 ? "Yes" : "No"; // here I have learned about string data type and header file
    cout << result << endl;

    return 0;
}
