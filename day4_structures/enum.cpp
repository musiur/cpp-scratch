#include <iostream>
#include <string>
using namespace std;

enum days
{
    staurday,
    sunday,
    monday
} day;

int main()
{

    days today;
    today = sunday;

    cout << today + 1 << endl;
    cout << sizeof(day) << endl;

    return 0;
}