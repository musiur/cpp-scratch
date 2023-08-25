#include <iostream>
using namespace std;

int GCDofTwo(int num2, int num3)
{
    int firstGCD, big, small;

    while (true)
    {
        small = num3 % num2;
        big = num2;

        num3 = big;
        num2 = small;

        if (small == 0)
        {
            firstGCD = big;
            break;
        }
    }

    return firstGCD;
}

int main()
{

    int num1{12}, num2{18};
    int result{0};
    result = (num1 * num2) / GCDofTwo(num2, num1);

    cout << result << endl;
    return 0;
}