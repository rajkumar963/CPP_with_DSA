//Displaying only essential information & hiding the detail.

#include<bits/stdc++.h>
using namespace std;

class Customer{
    string name;
    int age,balance;

    public:
    Customer(string a,int b,int c){
        name=a;
        age=b;
        balance=c;
    }
    void deposit(int amount){
        if(amount>0){
            balance+=amount;
        }
    }
    void display(){
        cout<<name<<" "<<age<<" "<<balance<<endl;
    }

};

int main(){

    Customer c1("prince",20,3000);
    Customer c2("sachin",30,4000);

    c1.deposit(1000);
    c1.display();
    

}