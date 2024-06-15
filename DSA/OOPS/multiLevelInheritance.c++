#include<bits/stdc++.h>
using namespace std;

class Person{
  protected:
    string name;
    int age;
  public:
    void introduce(){
        cout<<"hello my name is "<<name<<" and i am "<<age<<" years old"<<endl;
    }
};

class Employee:public Person{
   protected:
     int salary;
    public:
    void monthlySalary(){
        cout<<"my monthly salary is "<<salary<<endl;
    }
};

class Manager:public Employee{
    public:
    string department;

    Manager(string name,int age,int salary,string department){
        this->name=name;
        this->age=age;  
        this->salary=salary;
        this->department=department;    
    }
   
   void work(){
       cout<<"i am leading the department: "<<department<<endl;
   }

};

int main(){
    Manager m1("sachin",20,2000,"IT");
    m1.work();
    m1.introduce();
    m1.monthlySalary();
}