//the capability of a class to derive properties and characteristics from another class.
#include<bits/stdc++.h>
using namespace std;

// class Human{
//     private:
//     int a;
//     protected:
//     int b;
//     public:
//     int c;
//     void fun(){
//         a=10;
//         b=20;
//         c=30;
//     }
// };
// int main(){
//     Human h1;
//     h1.c=10;
// }

class Human{
    string Region,color;
    public:
    string name;
    int age,weight;    
    
};

class Student:private Human{
  int rollno,fees;


  public:
  Student(string name,int age,int weight ,int rollno,int fees){
    this->name=name;
    this->age=age;
    this->weight=weight;
    this->rollno=rollno;
    this->fees=fees;
      
  }
   
   void display(){
     cout<<name<<" "<<age<<" "<<weight<<" "<<rollno<<" "<<fees<<" "<<endl;
   }


//   void fun(string a,int b,int c){
//     name=a;
//     age=b;
//     weight=c;
//   }
// void display(){
//   cout<<name<<" "<<age<<" "<<weight<<" "<<rollno<<" "<<fees<<" "<<endl;
// }

};
class Teacher:public Human{
    int salary, id;
};

int main(){
 Student s1("sachin",20,50,1,1000);
 s1.display();
 Teacher t1;
 t1.name="prince";
 t1.age=20;
 
 
}