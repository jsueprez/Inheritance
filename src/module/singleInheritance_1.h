#ifndef SINGLEINHERITANCE_1_H
#define SINGLEINHERITANCE_1_H

#include <iostream>

class Fruit
{
private:
    std::string m_name;
    std::string m_color;

public:
    Fruit(const std::string& name, const std::string& color)
        :m_name(name), m_color(color)
    {
    }

    const std::string& get_name() const {return m_name;}
    const std::string& get_color() const { return m_color; }
};

class Apple : public Fruit
{
private:
    double m_fiber;

public:
    Apple(const std::string& name, const std::string& color, double fiber)
        : Fruit{name, color}, m_fiber(fiber)
    {
    }

    const double get_fiber() const {return m_fiber;}
};

std::ostream& operator<<(std::ostream& out, const Apple& a)
{
    out << "Apple(" << a.get_name() << ", " << a.get_color() << "," << a.get_fiber() << ")";
    return out;
}

class Banana : public Fruit
{
public:
    Banana(const std::string& name, const std::string& color)
        : Fruit(name, color)
    {
    };
};

std::ostream& operator<<(std::ostream& out, const Banana& b)
{
    out << "Banana(" << b.get_name() << ", " << b.get_color() << ")";
    return out;
}

#endif // SINGLEINHERITANCE_1_H
