#include<bits/stdc++.h>
using namespace std;
int main(){

    deque<int> d;
    d.push_back(10);    
    d.push_front(20);
    d.push_front(30);
    d.push_back(40);
    d.push_back(50);
    d.pop_front();
    d.pop_back();
    cout<<d.front()<<endl;
    cout<<d.back()<<endl;
    cout<<d.size()<<endl;
   
}