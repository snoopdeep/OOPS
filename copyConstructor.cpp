#include<iostream>
using namespace std;

class Test{
    public:
    int a;
    int *p;
    Test(int x){
        a=x;
        p=new int[a];
    }
    Test(Test &t){
        a=t.a;
        p=t.p;
        // creating a new array memory for the copy object
        // p=new int[a];
    }
};
int main(){
    
    Test t1(5);
    for(int i=0;i<5;i++)t1.p[i]=i;
    // creating a copy object but the dynamic memory will be same for both the objects;
    Test t2(t1);
    for(int i=0;i<5;i++){
        cout<<t2.p[i]<<" ";
    }
    

}