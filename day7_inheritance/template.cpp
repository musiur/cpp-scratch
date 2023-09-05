#include <iostream>
using namespace std;
template <class UniType>
class Calculator
{
private:
    UniType num1, num2;

public:
    Calculator(UniType n1, UniType n2)
    {
        num1 = n1;
        num2 = n2;
    }

    void displayResult()
    {
        cout << "Numbers: " << num1 << " and " << num2 << "." << endl;
        cout << num1 << " + " << num2 << " = " << add() << endl;
        cout << num1 << " - " << num2 << " = " << subtract() << endl;
        cout << num1 << " * " << num2 << " = " << multiply() << endl;
        cout << num1 << " / " << num2 << " = " << divide() << endl;
        cout << "-------------------------------"<< endl;
    }

    UniType add(){return num1 + num2;}
    UniType subtract(){return num1 - num2;}
    UniType multiply(){return num1 * num2;}
    UniType divide(){return num1 / num2;}
};

int main()
{
    Calculator<int> intCalc(10, 2);
    Calculator<float> floatCalc(10.5, 2.0);
    Calculator<double> doubleCalc(10.5, 2.0);

    intCalc.displayResult();
    floatCalc.displayResult();
    doubleCalc.displayResult();

    return 0;
}