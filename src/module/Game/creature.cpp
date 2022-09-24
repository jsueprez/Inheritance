#include "creature.h"

const std::string Creature::getName() const
{
    return m_name;
}
char Creature::getSymbol() const
{
    return m_symbol;
}

int Creature::getHealth() const
{
    return m_health;
}

int Creature::getDamage() const
{
    return m_damage;
}

int Creature::getGold() const
{
    return m_gold;
}

void Creature::reduceHealth(int health)
{
    m_health -= health;
}

void Creature::addGold(int gold)
{
    m_gold += gold;
}

bool Creature::isDead() const
{
    return m_health <= 0;
}
