#ifndef SCIENTIFICCALCULATOR_H
#define SCIENTIFICCALCULATOR_H


class ScientificCalculator
{
private:
    int num1, num2;

public:
    ScientificCalculator()=default;
    ~ScientificCalculator()= default;

    ScientificCalculator(int n1, int n2) : num1(n1), num2(n2)
    {

    }

    int mod();
    int power();
    int square();
    int logarithm();
    void print_results_scientific();
};

#endif // SCIENTIFICCALCULATOR_H
