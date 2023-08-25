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

    int num1{36}, num2{54}, num3{90};

    int firstGCD = GCDofTwo(num2, num3);
    int result{0};
    if (num1 > firstGCD)
    {
        result = GCDofTwo(firstGCD, num1);
    }
    else
    {
        result = GCDofTwo(num1, firstGCD);
    }

    cout << result << endl;
    return 0;
}