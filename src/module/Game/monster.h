#ifndef MONSTER_H
#define MONSTER_H

#include "creature.h"
#include <vector>


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

    static Monster getRandomMonster();

};

#endif // MONSTER_H
