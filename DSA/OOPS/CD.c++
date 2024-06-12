//Constructor
#include<bits/stdc++.h>
using namespace std;

class Customer
{
    string name;
    int age;
    int ac_no;
    int balance;
     int *roi;
    public:

   // constructor with parameters
    Customer(string name,int age,int ac_no,int balance){
        this->name=name;
        this->age=age;
        this->ac_no=ac_no;
        this->balance=balance;
    }
    //constructor with default values
    Customer(){
        name="prince";
        age=20;
        ac_no=1;
        balance=3000;
        roi=new int[100];
    }

    //constructor overloading
    Customer(string name,int age){
        this->name=name;
        age=age;
        ac_no=1;
        balance=3000;
       
    }

    //inline constructor
   inline Customer(string name,int age,int ac_no):name(name),age(age),ac_no(ac_no),balance(1000)
   {

   }

    void display(){
        cout<<name<<endl;
        cout<<age<<endl;
        cout<<ac_no<<endl;
        cout<<balance<<endl;
    }

    //copy constructor
    Customer(Customer &c){
        name=c.name;
        age=c.age;
        ac_no=c.ac_no;
        balance=c.balance;
    }
    
};
int main(){
    Customer c1("sachin",20,1,1000);
    Customer c2("prince",28,1,9000);
    c1.display();
    c2.display();
    Customer c3(c2);
    c3.display();
    return 0;
}
