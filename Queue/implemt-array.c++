#include<bits/stdc++.h>
using namespace std;

class Queue{
   int *arr;
   int front, rear, size;

public:
   Queue(int n){
       arr = new int[n];
       front = rear = -1;
       size = n;
   }

   // Check if the queue is empty
   bool IsEmpty(){
       return front == -1;
   }

   // Check if the queue is full
   bool IsFull(){
       return rear == size - 1;
   }

   // Push element into queue
   void push(int x){
       if(IsFull()){
           cout<<"Queue is overflow"<<endl;
           return;
       }
       if(IsEmpty()){
           front = rear = 0;
       } else {
           rear++;
       }
       arr[rear] = x;
       cout<<"pushed "<<x<<" into queue"<<endl;
   }

   // Pop element from queue
   void pop(){
       if(IsEmpty()){
           cout<<"Queue is underflow"<<endl;
           return;
       } else {
           cout<<"popped "<<arr[front]<<endl;
           if(front == rear){
               front = rear = -1; // Reset queue to empty state
           } else {
               front++;
           }
       }
   }

   // Start element of queue
   int start(){
       if(IsEmpty()){
           cout<<"Queue is empty"<<endl;
           return -1;
       } else {
           return arr[front];
       }
   }
};

int main(){
    Queue q(5);
    q.push(2);
    q.push(3);
    q.push(4);
    q.pop();
    cout<<"top element: "<<q.start()<<endl;

    return 0;
}
