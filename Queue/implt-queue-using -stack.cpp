#include<bits/stdc++.h>
using namespace std;

class Queue{
    stack<int> s1;
    stack<int> s2;
    public:
    bool empty(){
        return s1.empty() && s2.empty();
    }

    void push(int x){
        s1.push(x);
    }
    void pop(){
        if(empty()){
            cout << "empty queue" << 0;
        }

        if(!s2.empty()){
            int element = s2.top();
            s2.pop();
            cout << "popped " << element;
        }else{
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
            int element = s2.top();
            s2.pop();
            cout << "popped " << element;
        }
    }

    int peek(){
        if(empty()){
            cout << "empty queue" << 0;
        }
        if(!s2.empty()){
            int element = s2.top();
            cout << "top element: " << element;
        }else{
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
            int element = s2.top();
            cout << "top element: " << element;
        }
    }

};

int main(){
    Queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.pop();
    q.pop();    
    q.peek();
}