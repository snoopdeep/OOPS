#include<iostream>
using namespace std;

class Base{
    private:
        int a=6;
    protected:
        int b=19;
    public:     
        int c=55;    

    friend void funtion2();        
};
// it can only access public members of the Base class... 
void funtion1(){
    Base bObj;
    cout<<bObj.c<<endl;
}
void funtion2(){
    Base b;
    cout<<b.a<<" "<<b.b<<" "<<b.c<<endl;
}
int main(){
    funtion1();
    funtion2();
    return 0;
}