#ifndef SINGLEINHERITANCE_3_H
#define SINGLEINHERITANCE_3_H

#include <iostream>
#include <string>
#include <vector>
//#include <array> bring problem when include this
#include <cstdlib>
#include <ctime>

int getRandomNumber(int min, int max)
{
    static constexpr double fraction{ 1.0 / (RAND_MAX + 1.0) }; // static used for efficiency, so we only calculate this value once
    // evenly distribute the random number across our range
    return min + static_cast<int>((max - min + 1) * (std::rand() * fraction));
}

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

    const std::string getName() const { return m_name;}
    char getSymbol() const { return m_symbol;}
    int getHealth() const { return m_health;}
    int getDamage() const { return m_damage;}
    int getGold() const { return m_gold;}

    void reduceHealth(int health){ m_health -= health; }
    void addGold(int gold){ m_gold += gold;}
    bool isDead() const { return m_health <= 0; }

};

class Player : public Creature
{
private:
    int m_level =1;

public:
    Player(const std::string& name)
        : Creature(name, '@', 10, 1, 0)
    {
    }

    void levelUp()
    {
        m_level++;
        m_damage++;
    }

    int getLevel() const {return m_level; }
    bool hasWon() const { return m_level >= 20;}
};

class Monster : public Creature
{
public:
    enum class Type
    {
        DRAGON,
        ORC,
        SLIME,
        MAX_TYPES
    };

private:
    // had to declared outise of the block function to make it work
    static const inline std::vector<Creature> monsterData{
        { "dragon", 'D', 20, 4, 100 },
        { "orc", 'o', 4, 2, 25 },
        { "slime", 's', 1, 1, 10 }
    };

    static const Creature& getDefaultCreature(Type type)
    {
        return monsterData.at(static_cast<std::size_t>(type));
    }


public:
    Monster(Type type)
        : Creature{getDefaultCreature(type)}
    {
    }

    static Monster getRandomMonster()
    {
        int num(getRandomNumber(0,static_cast<int>(Type::MAX_TYPES) -1));
        return Monster(static_cast<Type>(num));
    }

};

#endif // SINGLEINHERITANCE_3_H
