#include<bits/stdc++.h>
using namespace std;

class Dequeue{
    int* arr;
    int front, rear,size;
    public:

    Dequeue(int n){
        arr = new int[n];
        front = rear = -1;
        size = n;
    }
    
    bool IsEmpty(){
        return front == -1;
    }

    bool IsFull(){
        return (rear + 1) % size == front;
    }

    void push_front(int x){
        if(IsEmpty()){
            front = rear = 0;
            cout<<"pushed front "<<x<<endl;
            arr[rear] = x;
            return;
        }
        else if(IsFull()){
            cout<<"DeQueue is overflow"<<endl;
            return;
        }else{
            front = (front - 1 + size) % size;
            arr[front] = x;
            cout<<"pushed front "<<x<<endl;
            return;
        }
    }

    void push_back(int x){
        if(IsEmpty()){
            front = rear = 0;
            cout<<"pushed back "<<x<<endl;
            arr[rear] = x;
            return;
        }else if(IsFull()){
            cout<<"DeQueue is overflow"<<endl;
            return;
        }else{
            rear = (rear + 1) % size;
            arr[rear] = x;
            cout<<"pushed back "<<x<<endl;
            return;
        }
    }
    
    void pop_front(){
        if(IsEmpty()){
            cout<<"DeQueue is underflow"<<endl;
            return;
        }else {
            //single element
            cout<<"popped front "<<arr[front]<<endl;
            if(front == rear){
                front = rear = -1;
            }else{
            //greater than 1 element
                front = (front + 1) % size;
            }
        }
    }

    void pop_back(){
        if(IsEmpty()){
            cout<<"DeQueue is underflow"<<endl;
            return;
        }else {
            cout<<"popped back "<<arr[rear]<<endl;
            //single element
            if(front == rear){
                front = rear = -1;
            }else{
            //greater than 1 element
                rear = (rear - 1 + size) % size;
            }
        }
    }

    int start(){
        if(IsEmpty()){
            cout<<"DeQueue is underflow"<<endl;
            return -1;
        }else{
            return arr[front];
        }
    }

    int end(){
        if(IsEmpty()){
            cout<<"DeQueue is underflow"<<endl;
            return -1;
        }else{
            return arr[rear];
        }    
    }

};

int main(){
    Dequeue d(5);
    d.push_front(10);
    d.push_front(20);
    d.push_front(30);   
    d.push_back(40);
    d.push_back(50);
    //d.push_back(70);
    d.pop_front();
    d.pop_back();
    cout<<d.start()<<endl;
    cout<<d.end()<<endl;
}