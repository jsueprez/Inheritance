#ifndef SIMPLECALCULATOR_H
#define SIMPLECALCULATOR_H

class SimpleCalculator
{
private:
    int num1, num2;

public:
    SimpleCalculator()=default;
    ~SimpleCalculator()= default;

    SimpleCalculator(int n1, int n2) : num1(n1), num2(n2)
    {

    }

    int sum();
    int substract();
    int multiply();
    int divide();
    void print_results_simple();

};

#endif // SIMPLECALCULATOR_H
