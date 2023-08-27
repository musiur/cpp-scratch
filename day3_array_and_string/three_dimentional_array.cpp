#include <iostream>
using namespace std;

int main()
{

    int two_d_arr[3][3][3] = {
        {
            {1, 3, 5},
            {2, 4, 6},
            {7, 8, 9},
        },
        {
            {1, 3, 5},
            {2, 4, 6},
            {7, 8, 9},
        },
        {
            {1, 3, 5},
            {2, 4, 6},
            {7, 8, 9},
        },
    };

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                cout << two_d_arr[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}