#include <iostream>
#include <cmath>
using namespace std;

bool pass(float num);
bool pass(double num);


int main()
{

    cout << pass(25.5f) << endl;
    cout << pass(80.5) << endl;

    return 0;
}

bool pass(float num){
    if(num > 33){
        return true;
    }
    return false;
}

bool pass(double num){
    if(num > 33){
        return true;
    }
    return false;
}