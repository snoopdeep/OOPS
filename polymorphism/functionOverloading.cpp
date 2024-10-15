#include<iostream>
using namespace std;

class Shape{
    public:
        int area(){
            return 0;
        }
        int area(float a,float b,int c){
            return a*b*c;
        }
        int area(float a,float b){
            return a*b;
        }
};
int main(){
    Shape obj;
    cout<<obj.area()<<endl;
    cout<<obj.area(2.2,1.1,5)<<endl;
    cout<<obj.area(2.2,2.2)<<endl;
}