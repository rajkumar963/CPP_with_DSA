#include<bits/stdc++.h>
using namespace std;
class Human{
    protected:
    string name;
    int age;

    public:
    
    Human(string name,int age){
        this->name=name;
        this->age=age;
    }

    void display(){
        cout<<name<<" "<<age<<" "<<endl;
    }

    void work(){
        cout<<"I am working"<<endl;
    }
};

class Student:public Human{
    int rollno,fees;

    public:
    Student(string name,int age,int rollno,int fees):Human(name,age){
        // this->name=name;
        // this->age=age;
        this->rollno=rollno;
        this->fees=fees;
    }

    void display(){
        cout<<name<<" "<<age<<" "<<rollno<<" "<<fees<<" "<<endl;
    }

    
};

int main(){
   Student s1("sachin",20,1,1000);
    s1.work();
    s1.display();
   
    return 0;
}