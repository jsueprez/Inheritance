#include "scientificcalculator.h"

#include <iostream>
#include <math.h>


using std::cout;
using std::endl;

int ScientificCalculator::mod()
{
    return num1 % num2;
}

int ScientificCalculator::power()
{
    return pow(num1, num2);
}

int ScientificCalculator::square()
{
    return sqrt(num1);
}

int ScientificCalculator::logarithm()
{
    return log(num1);
}

void ScientificCalculator::print_results_scientific()
{
    cout << "This is the result of the scientifics calculation" << endl;
    cout << "Module of " << num1 << " with " << num2 << " is equal to: "<< mod() << endl;
    cout << "Power of " << num1 << " raised to " << num2 << " is equal to: "<< power() << endl;
    cout << "Square of " << num1 << " is equal to: "<< square() << endl;
    cout << "Logarithm of " << num1 << " is equal to: "<< logarithm() << endl;
}
