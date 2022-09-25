#ifndef DOG_H
#define DOG_H

#include "animal.h"

class Dog : public Animal
{
public:
    Dog(const std::string& name)
        : Animal(name)
    {
    };

    std::string speak() const override;
};

#endif // DOG_H
