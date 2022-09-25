#ifndef CAT_H
#define CAT_H

#include "animal.h"

class Cat : public Animal
{
public:
    Cat(const std::string& name)
        : Animal{name}
    {
    };
    std::string speak() const override;
};

#endif // CAT_H
