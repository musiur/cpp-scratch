#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int stars = 1;
    int spaces;

    for (int i = stars; i <= n * 2; i++)
    {
        spaces = n - stars;

        for (int j = 0; j < stars; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < spaces; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < stars; j++)
        {
            cout << "*";
        }

        if (stars == n)
        {
            stars++;
            spaces--;
        }
        else
        {
            stars--;
            spaces++;
        }
        cout << endl;
    }
    return 0;
}