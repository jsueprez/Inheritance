#include <iostream>
#include "singleInheritance.h"
#include "singleInheritance_1.h"
#include "singleInheritance_2.h"
#include "singleInheritance_3.h"
#include "accessModifier_VisibilityMode.h"
static void attackMonster(Monster& m, Player& p)
{
    m.reduceHealth(p.getDamage());
    std::cout << "You hit the " << m.getName()
              << " for " << p.getDamage()
              << " damage.\n";
}

static void attackPlayer(Monster& m, Player& p)
{
    p.reduceHealth(m.getDamage());
    std::cout << "The " << m.getName()
              << " hit you for " << m.getDamage()
              << " damage.\n";
}

static void fightMonster(Player& p)
{
    Monster m{ Monster::getRandomMonster() };
    std::cout << "You have encountered a " << m.getName() << "(" << m.getSymbol() << ").\n";

    char answer;
    std::cout << "(R)un or (F)ight: ";
    std::cin >> answer;

    switch (answer)
    {
    case 'r':
    case 'R':
        if(getRandomNumber(1, 2) == 1)
        {
            std::cout << "You failed to flee." << std::endl;
            attackPlayer(m,p);
        }
        else
            std::cout << "You successfully fled." << std::endl;
        break;

    case 'f':
    case 'F':
        attackMonster(m,p);
        if(m.isDead())
        {
            p.addGold(m.getGold());
            p.levelUp();

            std::cout << "You killed the " << m.getName() << ".\n"
                      <<  "You are now level " << p.getLevel() << ".\n"
                      <<  "You found " << m.getGold() <<  " gold.\n";
        }
        else
        {
            attackPlayer(m,p);
        }
        break;

    default:
        std::cout << "Action not valid" << std::endl;
        break;

    }
}

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

    std::string name;
    std::cout << "Enter your name: ";
    std::cin >> name;

    Player p1(name);

    std::cout << "Welcome, " << p1.getName() << ".\n";
    std::cout << "You has " << p1.getHealth()
              << " health and are carrying "
              << p1.getGold() << " gold.\n";

    std::srand(static_cast<unsigned int>(std::time(nullptr))); // set initial seed value to system clock
    std::rand(); // get rid of first result

    while(!p1.hasWon() && !p1.isDead())
        fightMonster(p1);


    if(p1.isDead())
        std::cout << "You died at level " << p1.getLevel()
                  << " and with " << p1.getGold() << " gold.\n"
                  << "Too bad you can’t take it with you!\n";
    else if(p1.hasWon())
        std::cout << "You has won the game.\n"
                  << "With " << p1.getGold() << " gold.\n";


    return 0;
}




