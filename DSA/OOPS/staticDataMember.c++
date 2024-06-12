//They are attributes of classes or class
//Static member functions
//const

#include<bits/stdc++.h>
using namespace std;
class Customer{
  string name;
    int ac;
   int balance;
 static int total_customers; 
 static int total_balance;  

    public:
    Customer(string name,int ac,int balance){
        this->name=name;
        this->ac=ac;
        this->balance=balance;
        total_customers++;
        total_balance+=balance;
    }

    static void acceStatic(){
        //cout<<name<<" "<<ac<<" "<<balance<<" "<<total_customers<<" "<<total_balance<<endl;
        cout<<total_customers<<endl;
        cout<<total_balance<<endl;
    }
     
     void deposit(int amount){
         if(amount>0){
             balance+=amount;
             total_balance+=amount;
         }
     }

     void withdraw(int amount){
         if(amount>0 && balance>=amount){
             balance-=amount;
             total_balance-=amount;
         }
     }


    void display(){
        cout<<name<<" "<<ac<<" "<<balance<<" "<<total_customers<<" "<<total_balance<<endl;
        
    }

    void display2(){
        cout<<total_customers<<endl;
    }


};

int Customer::total_customers=0;
int Customer::total_balance=0;

int main(){
    Customer c1("sachin",1,1000);
    Customer c2("prince",2,9000);
    Customer c3("rahul",3,9000);
    c1.deposit(1000);
    c2.withdraw(2000);
    Customer::acceStatic();
    c1.display();
    c2.display();
    c3.display();
    
}