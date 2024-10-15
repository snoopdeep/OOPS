#include<iostream>
using namespace std;

class Base{
    public:
        Base(){
            cout<<"Base constructor is called!"<<endl;
        }
       virtual ~Base(){
            cout<<"Base destructor is called!"<<endl;
        }
};

class Derived: public Base{
    public:     
        Derived(){
            cout<<"Derived constructor is called!"<<endl;
        }
        ~Derived(){
            cout<<"Derived destructor is called!"<<endl;
        }
};

int main(){
    // case 1
    // Base b;
    // cout<<"hi"<<endl;

    // case 2
    // Derived d;
    // cout<<"HI"<<endl;

    // case 2

    Base *ptr = new Derived;
    cout<<"HI"<<endl;
    delete ptr; // make base destructor virtual to call derived destructor
}