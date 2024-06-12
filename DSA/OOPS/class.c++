//public method
// #include<bits/stdc++.h>
// using namespace std;
// class Student{
//  public:                  //public,private,protected
//     string name;
//     int age;
//     int rollno;
//     string grade;
// };
// int main(){
//  Student s1;
//  s1.name="sachin";
//  s1.age=20;
//  s1.rollno=1;
//  s1.grade="A+";
//  cout<<s1.name<<endl;
//  cout<<s1.age<<endl;
//  cout<<s1.rollno<<endl;
//  cout<<s1.grade<<endl;
//     return 0;
// }

//private method
// #include<bits/stdc++.h>
// using namespace std;
//class Student {
// private:  // Access specifier
//     string name;
//     int age;
//     int rollno;
//     string grade;
// public:
//     // Setter for name
//     void setName(string s) {
//         if(s.empty()) {
//             cout << "Invalid name" << endl;
//             return;
//         }
//         name = s;
//     }
//     // Setter for age
//     void setAge(int a) {
//         if(a < 0 || a > 100) {
//             cout << "Invalid age" << endl;
//             return;
//         }
//         age = a;
//     }
//     // Setter for roll number
//     void setRollno(int r) {
//         rollno = r;
//     }
//     void setGrade(string g) {
//         grade = g;
//     }
//     // Getter for name
//     void getName() {
//         cout << name << endl;
//     }
//     // Getter for age
//     void getAge() {
//         cout << age << endl;
//     }
//     // Getter for roll number
//     int getRollno()  {
//         return rollno;
//     }
//     // Getter for grade with a pin for access control
//     string getGrade(int pin)  {
//         if(pin == 123)
//             return grade;
//         return "Invalid pin";
//     }
// };
// int main() {
//     Student s1;
//     s1.setName("John Doe");
//     s1.setAge(20);
//     s1.setRollno(1);
//     s1.setGrade("A+");
//     s1.getName();
//     s1.getAge();
//     cout << s1.getRollno() << endl;
//     cout << s1.getGrade(125) << endl;
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// class a{
//     char c;
//     int b;
//     char d;
//     double e;//padding reason
// };
// int main(){
//     a obj;
//     cout<<sizeof(obj)<<" ";
// }

// Dyanamic memory allocation
// #include<bits/stdc++.h>
// using namespace std;
// class Student{
//     public:                  
//      string name;
//      int age;
//      int rollno;
//      string grade;
// };
// int main(){
//     Student *S=new Student;  
//     (*S).name="sachin";
//     (*S).age=20;
//     (*S).rollno=1;
//     (*S).grade="A+";
//     cout<<S->name<<endl;
//     cout<<S->age<<endl;
//     cout<<S->rollno<<endl;
//     cout<<S->grade<<endl;
//     return 0;
// }


//constructor and destructor
