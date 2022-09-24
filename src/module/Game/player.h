#ifndef PLAYER_H
#define PLAYER_H

#include "creature.h"

class Player : public Creature
{
private:
    int m_level =1;

public:
    Player(const std::string& name)
        : Creature(name, '@', 10, 1, 0)
    {
    }

    void levelUp();

    int getLevel() const;
    bool hasWon() const ;
};

#endif // PLAYER_H
