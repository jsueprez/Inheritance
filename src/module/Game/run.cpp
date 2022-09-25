#include "monster.h"
#include "player.h"

int getRandomNumber(int min, int max);

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

void playGame()
{
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
}
