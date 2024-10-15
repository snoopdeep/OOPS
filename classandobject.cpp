#include<iostream>
using namespace std;
class Bank{
    private:
        int amount;
    public:
        void deposite(int n){
            amount=n;
        }    
        int withdraw(int n){
            if(n<=amount){
                amount-=n;
                return n;
            }else return -1;

        }
        int queryAmount(){
            return amount;
        }
};
int main(){
    // object in stack
    Bank user1;
    user1.deposite(1000);
    cout<<user1.queryAmount()<<endl;
    user1.withdraw(500);
    cout<<user1.queryAmount()<<endl;

    // object in heap  
    Bank *user2=new Bank();
    user2->deposite(100);
    cout<<user2->queryAmount()<<endl;

}