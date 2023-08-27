#include <iostream>
using namespace std;

int main(){

    int arr[] = {1,2,3,4,5};

    for(int num : arr){
        cout << arr[num - 1] << endl;
    }

    return 0;
}