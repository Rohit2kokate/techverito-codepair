#include<bits/stdc++.h>
using namespace std;
int balance=0;
class ATM{
    public:
        void balances(){
            cout<<"Your balance is: "<<balance<<endl;
        }
        void withdraw(int amount){
            cout<<"ENTER MONEY WANT TO WITHDREAW"<<endl;
            cin>>amount;
            if(amount>balance){
                cout<<"INSUFFICIENT BALANCE"<<endl;
            }
            else {  
                    int balance=balance-amount;
                }
        }
        void chapin(int pin){
                int old;
                cout<<"ENTER OLD PIN"<<endl;
                cin>>old;
                if(pin==old){
                    int ne;
                    cout<<"Enter the new pin";
                    cin>>ne;
                }
        }
        int pins(){
                    int pin=rand();
                    cout<<"YOUR GENERATE ATM PIN IS"<<pin<<endl;
            return pin;
        }
        void withdraw(){
            cout<<"ENTER MONEY YOU WANT TO WITHDRAW"<<endl;
            int withdraw;
            cin>>withdraw;
            if(withdraw>balance){
                cout<<"INSUFFICIENT BALANCE"<<endl;
            }
            else{
                balance=balance-withdraw;
            }
        }
        void deposit(){
            cout<<"ENTER MONEY YOU WANT TO DEPOSIT"<<endl;
            int dept;
            cin>>dept;
            balance+=dept;
        }
};
int main(){
    int input;
    long long int cardno=0;
    ATM a;
    cout<<"===================ATM MACHINE I/O===================="<<endl;
    do{
        cout<<"1.GENERATE NEW ATM CARD"<<endl;
        cout<<"2.USE YOU ATM CARD"<<endl;
        cout<<"0.EXIT"<<endl;
        cout<<"ENTER YOUE OPTION"<<endl;
        cin>>input;
        switch(input){
            case 1:
                cout<<"YOUR GENERATED ATM CARD DETAILS"<<endl;
                cardno=rand()*1000000;
                cout<<"ATM NUMBER ="<<cardno<<endl;
                break;
            case 2:
                    if(cardno!=0){
                        int choice;
                        do{
                                cout<<"1.CHECK BALANCE"<<endl;
                                cout<<"2.CHANGE ATM PIN"<<endl;
                                cout<<"3.WITHDRAW MONEY"<<endl;
                                cout<<"4.GENERATE ATM PIN"<<endl;
                                cout<<"5.DEPOSITE AMOUNT"<<endl;
                                cout<<"6.EXIT"<<endl;
                                cout<<"ENTER THE CHOICE"<<endl;
                                cin>>choice;
                                int pin=0;

                                    switch(choice){
                                        case 1:
                                            if(pin==0){
                                                cout<<"GENERATE ATM PIN"<<endl;
                                            }else{
                                                 a.balances();
                                            }
                                            break;
                                        case 2:
                                            a.chapin(pin); 
                                            break;
                                        case 3:
                                                a.withdraw();
                                            break;
                                        case 4:
                                            pin=a.pins();
                                            break;
                                        case 5:
                                                a.deposit();
                                            break; 
                                    }
                        }while(choice!=6);
                    }
                        break;

            default:
                cout<<"INVALID OPTION"<<endl;
                  break;
        }
    }while(input!=0);
}