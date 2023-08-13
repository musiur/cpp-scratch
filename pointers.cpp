#include <iostream>
using namespace std;

// int add_numbers(int a, int b);
void swap(int *a, int *b);

int main()
{
    /**
     * @brief
     * Intro to Pointers
     *
     */
    // int a = 10;
    // int *a_ptr = &a;

    // cout << a << endl;      // value of a
    // cout << a_ptr << endl;  // address of a
    // cout << *a_ptr << endl; // value of a || de-referencing the address of variable a

    // *a_ptr = 20;

    // cout << a << endl;

    /**
     * @brief
     * Arithmatic Pointer
     * ++, --, +, -
     * Increment, Decrement, Plus, Minus
     *
     */

    // int arr[3] = {10, 20, 30};

    // int *arr_ptr = arr;
    // int i = 0;
    // do
    // {
    //     cout << *arr_ptr << endl; // *(arr + i)
    //     *arr_ptr++;
    //     i++;
    // } while (i < 3);

    /**
     * @brief
     * Usages of pointers
     * pass by value --> lvalue
     * pass by reference --> rvalue
     *
     *
     */

    // pass by value

    // int a = 5;
    // int b = 6;

    // int sum = add_numbers(a, b);

    // cout << sum << endl;

    // pass by reference

    int a = 8;
    int b = 9;
    int *a_ptr = &a;
    int *b_ptr = &b;

    swap(a_ptr, b_ptr);

    cout << a << " " << b << endl;

    return 0;
}

// int add_numbers(int a, int b)
// {
//     return a + b;
// }

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}