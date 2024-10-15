#include<iostream>
using namespace std;

class Base{
    public:
        void fun1(){
            cout<<"Base Class function1"<<endl;
        }
};
class Derived: public Base{
    public: 
        void fun2(){
            cout<<"Derived class function2"<<endl;
        }
};

int main(){
    Base *ptr=new Derived();
    ptr->fun1();
    // ptr->fun2();
    
    // we cant assign a derived class pointer to a base class object. 
    // Derived *ptr1= new Base();
}