#include<iostream>
#include<bits/stdc++.h>
#include<stdlib.h>
#include<string.h>
using namespace std;
class Bankatm{ 
    private: 
       string holdername;
       long long accountno;
       long long amount = 0;
       long long total = 0;
       char type[15]; 
    public:
        void setdata(){
            cout<<"Enter the name of Bank's Holder:"<<endl;
            cin.ignore(); 
            getline(cin,holdername);
            cout<<"Enter your Account Number:"<<endl;
            cin>>accountno;
            cout<<"Enter Account type"<<endl;
            cin>>type;
            cout<<"Enter Balance"<<endl;
            cin>>total;
        }
        void showvalue(){
            cout<<"Name:"<<holdername<<endl;
            cout<<"Account Number:"<<accountno<<endl;
            cout<<"Account type:"<<type<<endl;
            cout<<"Balance:"<<total<<endl;
        }
        void deposit(){
            cout<<"\nEnter amount to be Deposited\n:";
            cin>>amount;
        }
        void showbalance(){ 
            total = total + amount;
            cout<<"\nTotal Balance is: "<<total;
        }
        void withdrawl(){ 
            int x, available_bal;
            cout<<"Enter Amount to Withdraw:"<<endl;
            cin>>x;
            available_bal = total - x;
            cout<<"Available Balance is:"<<available_bal;
        }
};

int main(){
    Bankatm y;
    int select;
    int i;
    while (i){
        cout<<"\n-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-"<<"*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-"<<"*-*-*-*-*--WELCOME--*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-"<<"*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-"<<"*-*-*-*-*-*-*-*-*-*-*-*-\n"<<endl;
        cout<<"Enter Your Choice:"<<endl;
        cout<<"t1. Enter your name , Account number , Account type\n";
        cout<<"t2. Balance Enquiry\n";
        cout<<"t3. Deposit Money\n";
        cout<<"t4. Show Total Balance\n";
        cout<<"t5. Withdraw Money\n";
        cout<<"t6. Cancel\n";
        cin>>select;  

        switch (select)
        {
        case 1:
            y.setdata();
            break;
        case 2: 
            y.showvalue();
            break;
        case 3: 
            y.deposit();
            break;
        case 4: 
            y.showbalance();
            break;
        case 5: 
            y.withdrawl();
            break;
        case 6: 
            exit(i);
            break;
        default:
            cout<<"\nInvalid Choice\n";
        }
    }
    
}