#include<iostream>
using namespace std;

// for a single type of data type ie int, float, double etc..
template<class T> T add(T a,T b){
    T c= a+b;
    return c;
}

// for different data types
template<class A,class B> B add(A a, B b){
    B res= a+b;
    return res;
}
// Overloading a Function Template

template<class X> void fun( X x){
    cout<<" value is : "<<x<<endl;

}
template<class A, class B> void fun(A a, B b){
    cout<<" value is : "<<a<<" "<<b<<endl;
}
int main(){
    // have same data types
    cout<<add(2,3)<<endl;
    cout<<add(2.3f,4.5f)<<endl;
    cout<<add(3.4,44.5)<<endl;
    // having different data types
    cout<<add(3,4.4)<<endl;

    // overloading 
    fun(5);
    fun(5,6);
}