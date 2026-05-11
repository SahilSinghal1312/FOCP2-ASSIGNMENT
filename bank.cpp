#include <iostream>
using namespace std;
class bankaccount{
    public:
    string accountholdername;
    int balance;
    int rewardpoints;
    int z;
    bankaccount(string acc_h_name,int bal,int rwp){
        accountholdername=acc_h_name;
        balance=bal;
        rewardpoints=rwp;
        cout<<"----initial balance----"<<endl;
        cout<<"holder name:"<<acc_h_name<<endl;
        cout<<"balance is :"<<bal<<endl;
        cout<<"reward points :"<<rwp<<endl;
    }
    void withdraw(){
        
        z=balance-500;
        cout<<z<<endl;
        cout<<(rewardpoints-20)<<endl;
    }
    void display(){
        cout<<"----final balance----"<<endl;
        cout<<"holder name:"<<accountholdername<<endl;
        cout<<"balance is :"<<z<<endl;
        cout<<"reward points :"<<(rewardpoints-20)<<endl;
    }

};
int main(){
    bankaccount b("Sahil",500000,1000);
    b.withdraw();
    b.display();
    return 0;
}