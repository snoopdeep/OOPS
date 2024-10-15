#include<iostream>
using namespace std;

class Animal{
    public:
       virtual void sound(){
            cout<<"Animal make sound!"<<endl;
        }
        // pure virtual funtion make Animal Class an abstract class. 
       virtual void numberOfLegs()=0; 

};

class Dog: public Animal{
    public:     
        void sound(){
            cout<<"Dog Bark!!"<<endl;
        }
        void numberOfLegs(){
            cout<<"Dog has 4 legs!!"<<endl;
        }
};
class Rat: public Animal{
    public:     
        void sound(){
            cout<<"Rat don't Bark!!"<<endl;
        }
        void numberOfLegs(){
            cout<<"rat has 8 legs!!"<<endl;
        }
};
int main(){
    // Animal a;
    Dog d;
    // a.sound();
    // d.sound();

    Animal *aObj= new Dog;
    aObj->sound();
    aObj->numberOfLegs();
    aObj= new Rat;
    aObj->sound();
    aObj->numberOfLegs();
}