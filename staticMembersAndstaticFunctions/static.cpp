#include<iostream>
using namespace std;

class BMW{
    private:
        static int count;
        int modelNumber=246;
    protected:
        string ownerName="deepak";
    public:
        BMW(){
            count++;
        }
       static string color;
       static inline int price=10e5;
       static void getCarPrice(){
        // modelNumber++;
        cout<<"Car price is :"<<price<<endl;
    }   
    static int totalCarSold(){
        return count;
    }
};
int BMW::count=0;
string BMW::color="Black";

int main(){
    cout<<BMW::color<<endl;
    cout<<BMW::price<<endl;
    BMW::getCarPrice();
    BMW obj1;
    cout<<obj1.color<<" "<<obj1.price<<endl;
    obj1.getCarPrice();
    BMW obj2;
    cout<<BMW::totalCarSold()<<endl;
}