#include <iostream>
#include "singleInheritance.h"
#include "singleInheritance_1.h"
#include "singleInheritance_2.h"
#include "module/game/run.h"
#include "accessModifier_VisibilityMode.h"


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

    Run r;
    r.playGame();

    return 0;
}




