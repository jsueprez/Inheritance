#include "simplecalculator.h"

#include <iostream>

using std::cout;
using std::endl;

int SimpleCalculator::sum()
{
    return num1 + num2;
}

int SimpleCalculator::substract()
{
    return num1 - num2;
}

int SimpleCalculator::multiply()
{
    return num1 * num2;
}

int SimpleCalculator::divide()
{
    return num1 / num2;
}

void SimpleCalculator::print_results_simple()
{
    cout << "This is the result of the simple calculation" << endl;
    cout << "Sum of " << num1 << " with " << num2 << " is equal to: "<< sum() << endl;
    cout << "Substract of " << num1 << " with " << num2 << " is equal to: "<< substract() << endl;
    cout << "Multiply of " << num1 << " with " << num2 << " is equal to: "<< multiply() << endl;
    cout << "Divide of " << num1 << " with " << num2 << " is equal to: "<< divide() << endl;
}
