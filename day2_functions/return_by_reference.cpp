#include <iostream>
using namespace std;

int num;

int& test(){
    return num;
}
int main(){

    test() = 5;
    cout << num << endl;

    return 0;
}