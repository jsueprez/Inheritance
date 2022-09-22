#include <iostream>

class BasicCalculator // Base Class
{
private:
    int num1, num2;

public:
    BasicCalculator() = default;
    ~BasicCalculator() = default;

    BasicCalculator(int n1, int n2) : num1(n1), num2(n2)
    {
    }

    int sum() { return num1 + num2; };
    int substract() { return num1 - num2; };
    int multiply() { return num1 * num2; };
    int divide() { return num1 / num2; };
    void print_results()
    {
        std::cout << "This is the result of the basic calculation" << std::endl;
        std::cout << "Sum of " << num1 << " with " << num2 << " is equal to: " << sum() << std::endl;
        std::cout << "Substract of " << num1 << " with " << num2 << " is equal to: " << substract() << std::endl;
        std::cout << "Multiply of " << num1 << " with " << num2 << " is equal to: " << multiply() << std::endl;
        std::cout << "Divide of " << num1 << " with " << num2 << " is equal to: " << divide() << std::endl;
    };
};

class CasioCalculator : BasicCalculator // Derived Class
{
public:
    CasioCalculator(int i1, int i2) : BasicCalculator(i1, i2) {}
    void print_results()
    {
        std::cout << "This is the result of the CasioCalculator calculation" << std::endl;
        std::cout << "The Sum of two numbers is equal to: " << sum() << std::endl;
        std::cout << "The Difference of two numbers is equal to: " << substract() << std::endl;
        std::cout << "The Product of two numbers is equal to: " << multiply() << std::endl;
        std::cout << "The Divition of two numbers is equal to: " << divide() << std::endl;
    }
};
