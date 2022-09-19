#ifndef HYBRIDCALCULATOR_H
#define HYBRIDCALCULATOR_H

#include "simplecalculator.h"
#include "scientificcalculator.h"

class HybridCalculator : public SimpleCalculator, public ScientificCalculator
{
public:
    HybridCalculator(int n1, int n2)
        :   SimpleCalculator(n1,n2), ScientificCalculator(n1,n2)
    {

    }
};

#endif // HYBRIDCALCULATOR_H
