//wrapping up of data & information in a single unit while controlling access to them.

#include<bits/stdc++.h>
using namespace std;

class Customer{
    string name;
    int balance,age;

    public:
      Customer(string a,int b,int c){
          name=a;
          balance=b;
          age=c;
      }
      void deposit(int amount){
        if(amount>0){
            balance+=amount;
        }else{
            cout<<"Invalid amount \n"<<endl;
        }
      }
      void updateAge(int a){
        if(a>10&&a<=100){
            this->age=a;
      }else{
          cout<<"Invalid age \n"<<endl;
      }
      }

      void display(){
        cout<<name<<" "<<balance<<" "<<age<<endl;
      }

};

int main(){
 Customer c1("Pammi",1000,20);
 Customer c2("sachin",2000,30);
 c1.deposit(1000);
 c1.deposit(100);
 c2.updateAge(40);
 c1.display();
 c2.display();
}