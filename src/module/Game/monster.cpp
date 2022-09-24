#include "monster.h"

int getRandomNumber(int min, int max)
{
    static constexpr double fraction{ 1.0 / (RAND_MAX + 1.0) }; // static used for efficiency, so we only calculate this value once
    // evenly distribute the random number across our range
    return min + static_cast<int>((max - min + 1) * (std::rand() * fraction));
}

Monster Monster::getRandomMonster()
{
    int num(getRandomNumber(0,static_cast<int>(Type::MAX_TYPES) -1));
    return Monster(static_cast<Type>(num));
}
