#include <iostream>

class baseClass
{
private:
    int x;

protected:
    int y;

public:
    int z;
    void print_rules()
    {
        std::cout << "None of the derived classes can access anything that is private in the baseClass." << std::endl;
    }
};

class derivingPublicModeClass : public baseClass
{
public:
    void print_rules()
    {
        std::cout << "In derivingPublicModeClass, the public part of the baseClass is public, the protected part of the baseClass is protected, we say derivingPublicModeClass is-a-kind-of-a classBase. " << std::endl;
    }
};

class derivingPrivateModeClass : private baseClass
{
public:
    void print_rules()
    {
        std::cout << "In derivingPrivateModeClass, the public part and the protected part of the baseClass are private. " << std::endl;
    }
};

class derivingProtectedMode : protected baseClass
{
public:
    void print_rules()
    {
        std::cout << "In derivingProtectedMode, the public part and the protected part of the baseClass are protected. " << std::endl;
    }
};
