#include<iostream>
using namespace std;

class Derived;
class Base{
    private:
        int a=1;
    protected:
        int b=11;
    public:
        int c=33; 
    friend Derived;           
};
class Derived{
    public: 
    Base b;

    void fun(){
        cout<<b.a<<" "<<b.b<<" "<<b.c<<endl;
    }
    
};
int main(){
    Derived d;
    d.fun();
    return 0;
}