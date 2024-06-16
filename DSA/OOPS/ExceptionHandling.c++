//Exception Handling:- An exception is an unexpected event that occurs during the execution of a program. our program terminates suddenly with some error or exception.
//Try:- It represent a block of code that may through an exception placed inside the try block.
// Catch:- It is a block of code that is executed when a particular exception is thrown inside the try block.
// Throw:- An exception can be thrown using the throw keyword.

#include<bits/stdc++.h>
using namespace std;
class Customer{
    string name;
    int ac,balance;
    public:
    Customer(string name,int ac,int balance){
        this->name=name;
        this->ac=ac;
        this->balance=balance;
    };
    void deposit(int amount){
        if(amount>0){
            balance+=amount;
            cout<<amount<<"is created successfully "<<endl;
        }else{
            throw "Invalid amount";
        }
    };
    void withdraw(int amount){
        if(amount>0 && balance>=amount){
            balance-=amount;
            cout<<amount<<"is withdrawn successfully"<<endl;    
        }else{
            throw "your balance is not sufficient";
            }
    };
    void display(){
        cout<<name<<" "<<ac<<" "<<balance<<endl;
    };
};
int main(){
 Customer c1("sachin",1,1000);
 try{c1.deposit(1000);
 c1.withdraw(4000);
 c1.display();
 }catch(const char* e){
     cout<<"Error: "<<e<<endl;
 };
}