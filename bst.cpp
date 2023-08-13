#include <iostream>
using namespace std;

void printArray(int arr[8])
{
    cout << "\n[";
    for (int i = 0; i < 8; i++)
    {
        cout << arr[i];
        if (i == 7)
        {
            cout << "";
        }
        else
        {
            cout << ", ";
        }
    }
    cout << "]" << endl;
}

int sort_with_bst(int arr[8]){


    return arr;
}

int main()
{
    int arr[8] = {5, 2, 8, 4, 6, 3, 9, 7};
    printArray(arr);


    int bst_arr[8] = sort_with_bst(arr);
    return 0;
}