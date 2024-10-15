#include<iostream>
using namespace std;

class Outer{
    private:
        int a=5;
        static int b;
    public:
        void show(){
            cout<<"show of outer class"<<endl;
            i.ishow();
            cout<<i.id<<endl;
        }   

        class Inner{
            private:
                int ia=1;
            protected:
                int ib=2;
            public:
                int ic=3;
                static inline int id=5;  
                void ishow(){
                    cout<<"show of inner class"<<endl;
                }      
        };

        Inner i;
};

int Outer::b=10;

int main(){
    Outer obj;
    obj.show();

}