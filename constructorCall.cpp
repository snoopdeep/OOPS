#include<iostream>
using namespace std;

class Base{
    public:
        Base(){
            cout<<"Default of Base Class."<<endl;
        }
        Base(int x){
            cout<<"Param of Base Class."<<endl;
        }
};

class Child: public Base{
    public:
        Child(){
            cout<<"Default of Child class."<<endl;
        }
        // Child(int x){
        //     cout<<"Param of Child class."<<endl;
        // }
        // calling param of the base class
        Child(int x):Base(x){
            cout<<"Param of Child Class."<<endl;
        }
};
int main(){
    // Base baseObj1,baseObj2(5);
    Child childObj1;
    Child childObj2(5);

}