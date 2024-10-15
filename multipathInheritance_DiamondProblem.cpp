#include<iostream>
using namespace std;

class Base{
    public:
        void fun(){
            cout<<"This is base class function."<<endl;
        }
};
class Derived1: virtual public Base{
    public:     
};
class Derived2: virtual public Base{
    public:
};
class SuperDerived:public Derived1, public Derived2{
    public:
};

int main(){
    SuperDerived obj;
    obj.fun();
    return 0;
}