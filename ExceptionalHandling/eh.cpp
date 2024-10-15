#include<iostream>
using namespace std;

int division(int a,int b){
    if(b==0)throw 101;
    return a/b;
}
int main(){
    int a=5,b=4,c;
    try{
        c=division(a,b);
        cout<<c<<endl;
    }
    catch(int e){
        cout<<e<<endl;

    }
    cout<<"Bye";
    return 0;
}