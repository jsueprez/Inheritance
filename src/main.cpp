#include <iostream>
#include "singleInheritance.h"
#include "singleInheritance_1.h"
#include "singleInheritance_2.h"
#include "accessModifier_VisibilityMode.h"

/* functions has external linkage by default,
 * so I can use this function defined in other files
 * just placing a forward declaration */
void playGame();
void test_animal();
void test_form();

int main()
{
    // Single inheritance
    BasicCalculator basicCalc(2, 2);
    basicCalc.print_results();

    CasioCalculator casioCal(5, 2);
    casioCal.print_results();

    std::cout << std::endl
              << std::endl;
    // Access modifiers on Inheritance
    baseClass bClass;
    derivingPublicModeClass publicMode;
    derivingPrivateModeClass privateMode;
    derivingProtectedMode protectedMode;

    bClass.print_rules();
    bClass.z = 3;
    std::cout << "Only 'z' can be accesed by the bClass, z=" << bClass.z << std::endl;

    publicMode.print_rules();
    publicMode.z = 5;
    std::cout << publicMode.z << std::endl;

    privateMode.print_rules();
    // privateMode.z = 10; --> private member inaccesible

    protectedMode.print_rules();
    // protectedMode.z = 10; --> private member inaccesible

    std::cout << std::endl
              << std::endl;

    const Apple a{ "Red delicious", "red", 4.2 };
    std::cout << a << std::endl;

    const Banana b{ "Cavendish", "yellow" };
    std::cout << b << '\n';

    std::cout << std::endl
              << std::endl;

    Manzana m{ "roja" };
    Platano p;
    GrannySmith c;

    std::cout << "Mi " << m.get_name() << " es " << m.get_color() << ".\n";
    std::cout << "Mi " << p.get_name() << " es " << p.get_color() << ".\n";
    std::cout << "Mi " << c.get_name() << " is " << c.get_color() << ".\n";

    std::cout << std::endl
              << std::endl;

    std::cout << "Choose which to run Game(g), Animal(a): ";
    char answer{};
    std::cin >> answer;

    switch(answer)
    {
    case 'g':
        playGame();
        break;

    case 'a':
        test_animal();
        break;

    case 'f':
        test_form();
        break;

    default:
        std::cout << "Not valid answer.\n";
    }

    return 0;
}




