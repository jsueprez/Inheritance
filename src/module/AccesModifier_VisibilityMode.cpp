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

int main()
{
    baseClass bClass;
    derivingPublicModeClass publicMode;
    derivingPrivateModeClass privateMode;
    derivingProtectedMode protectedMode;

    bClass.print_rules();
    bClass.z = 3;
    std::cout << "Only 'z' can be accesed by the bClass, z=" << bClass.z << std::endl;

    publicMode.print_rules();
    publicMode.z = 5;
    std::cout << publicMode.z << std::endl;

    privateMode.print_rules();
    // privateMode.z = 10; --> private member inaccesible

    protectedMode.print_rules();
    // protectedMode.z = 10; --> private member inaccesible
}
