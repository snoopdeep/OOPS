#include<iostream>
using namespace std;

template<class X, class Y>
class Base{
    private:
        X a;
        Y b;
    public:
        Base(X x, Y y){
            this->a=x;
            this->b=y;
        }    

        void display(){
            cout<<"Values are : "<<a<<" and "<<b<<endl;
        }
};
int main(){
    Base<int,double> b(4,5.4);
    b.display();
}