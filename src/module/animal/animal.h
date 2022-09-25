#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>

class Animal
{
protected:
    std::string m_name;

public:
    Animal(const std::string& name)
        : m_name{name}
    {

    }

    const std::string getName() const;
    virtual std::string speak() const;
};

#endif // ANIMAL_H
