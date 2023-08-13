#include <iostream>
using namespace std;

void make5(int rows)
{
    int columns = rows * 2;
    int slab = rows * 0.5;
    int slabHeight = rows - slab;

    for (int i = rows; i > 0; i--)
    {
        for (int j = 1; j < columns; j++)
        {
            if (j == i || j == columns - i || i == slab)
            {
                if (i == slab)
                {

                    if (j < slabHeight - 1 || j > columns - slabHeight + 1)
                    {
                        cout << ".";
                    }
                    else
                    {
                        cout << "0";
                    }
                }
                else
                {
                    cout << "0";
                }
            }
            else
            {
                cout << ".";
            }
        }
        cout << endl;
    }
}

int main()
{
    for (int i = 5; i <= 45; i++)
    {
        if (i % 2 != 0)
        {
            make5(i);
        }
    }

    return 0;
}

/**

.....0.....
....0.0....
...0...0...
..0000000.. // slab height will be 50% of row number
.0.......0.
0.........0


*/