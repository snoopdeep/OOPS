#include<iostream>
using namespace std;

class Complex{
    public:
     int real,img;

    
        Complex(int r=0,int c=0){
            this->real=r;
            this->img=c;
        } 
    Complex operator *(Complex c2){
        Complex temp;
        temp.real= real*c2.real-img*c2.img;
        temp.img=real*c2.img+img*c2.real;
        return temp;
    }    
};
int main(){
    Complex c1(2,3);
    Complex c2(2,3);
    Complex c3 = c1*c2;
    cout<<c3.real<<" + "<<c3.img<<"i"<<endl;
}