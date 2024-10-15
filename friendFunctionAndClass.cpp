#include <iostream>
using namespace std;

class Base
{
private:
    int privateMember;

protected:
    int protectedMember;

public:
    Base(int a, int b)
    {
        this->privateMember = a;
        this->protectedMember = b;
    }
    // friend class declaration
    friend class FriendClass;
    // global friend function declaration
    friend void FriendFunction(Base &b);
};

// global friend function definition
void FriendFunction(Base &b)
{
    cout << "Private Member of Base Class is : " << b.privateMember << endl;
    cout << "Protected Member of Base Class is : " << b.protectedMember << endl;
}

class FriendClass
{
public:
    void display(Base &b)
    {
        cout << "Private Member of Base Class is : " << b.privateMember << endl;
        cout << "Protected Member of Base Class is : " << b.protectedMember << endl;
    }
};
int main()
{
    Base b(4, 5);
    FriendClass obj;
    obj.display(b);
    FriendFunction(b);
}