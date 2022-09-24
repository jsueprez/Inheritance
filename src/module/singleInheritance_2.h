#ifndef SINGLEINHERITANCE_2_H
#define SINGLEINHERITANCE_2_H

#include <iostream>

class Fruta
{
private:
    std::string m_color;
    std::string m_name;

public:
    Fruta(const std::string& name , const std::string color)
        : m_name(name), m_color(color)
    {
    }

    const std::string& get_name() const{ return m_name;}
    const std::string& get_color() const{ return m_color;}
};

class Manzana : public Fruta
{
protected:
    Manzana(const std::string& name, const std::string& color)
        : Fruta(name, color)
    {

    }
public:
    Manzana(const std::string& color)
        : Fruta("manzana", color)
    {

    }
};

class Platano : public Fruta
{
public:
    Platano()
        : Fruta("platano", "amarillo")
    {

    }
};

class GrannySmith : public Manzana
{
public:
    GrannySmith()
        : Manzana("granny smith apple","verde")
    {

    }

};

#endif // SINGLEINHERITANCE_2_H
