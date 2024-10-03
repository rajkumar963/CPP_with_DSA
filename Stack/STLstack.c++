#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int>s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.pop();
    cout<<"top element:"<<s.top()<<endl;
    cout<<"size of stack:"<<s.size()<<endl;
    cout<<"empty :"<<s.empty()<<endl;//0

}