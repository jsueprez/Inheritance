#include <iostream>

class baseClass
{
private:
    int iAmPrivateMember;
    int countPrivate();
protected:
    int iAmProtectedMember;
    int countProtected();
public:
    int iAmPublicMember;
    int countPublic();
};

class derivingPublicModeClass : public baseClass
{
};

class derivingPrivateModeClass : private baseClass
{
};

class derivingProtectedMode : protected baseClass
{
};

int main()
{
    baseClass bClass;
    derivingPublicModeClass publicMode;
    derivingPrivateModeClass privateMode;
    derivingProtectedMode protectedMode;

    bClass.iAmPublicMember = 1 ; // The only member accesible from outside of the class is the public member

    // privateMode. Protected and public member are only accesible within the class.

    protectedMode.

}
