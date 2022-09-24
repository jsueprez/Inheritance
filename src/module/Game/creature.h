#ifndef CREATURE_H
#define CREATURE_H

#include <iostream>

class Creature
{
protected:
    std::string m_name;
    char m_symbol;
    int m_health;
    int m_damage;
    int m_gold;

public:
    Creature(const std::string& name, char symbol, int health, int damage, int gold)
        : m_name(name),
          m_symbol(symbol),
          m_health(health),
          m_damage(damage),
          m_gold(gold)
    {
    }

    const std::string getName() const;
    char getSymbol() const;
    int getHealth() const;
    int getDamage() const;
    int getGold() const;

    void reduceHealth(int health);
    void addGold(int gold);
    bool isDead() const;

};

#endif // CREATURE_H
