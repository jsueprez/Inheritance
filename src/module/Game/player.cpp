#include "player.h"

void Player::levelUp()
{
    m_level++;
    m_damage++;
}

int Player::getLevel() const
{
    return m_level;
}

bool Player::hasWon() const
{
    return m_level >= 20;
}
