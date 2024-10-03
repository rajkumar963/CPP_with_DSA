#include<bits/stdc++.h>
using namespace std;
//queue implementation using linked list
class Node{
   public:
   int data;
   Node *next;

   Node(int val){
      data=val;
      next=NULL;
   }
};

class Queue{
     Node *front;
     Node *rear;

     public:
     Queue(){
        front=NULL;
        rear=NULL;
     }

     //queue is empty
     bool IsEmpty(){
        return front==NULL;
     }

     //push element into queue
     void push(int x){
        //Empty
        if(IsEmpty()){
            cout<<"pushed "<<x<<endl;
            front=rear=new Node(x);
            return;
        }else{
            rear->next=new Node(x);
            if(rear->next==NULL){
                cout<<"Queue is overflow"<<endl;
                return;
            }
            cout<<"pushed "<<x<<endl;
            rear=rear->next;
        }
     }

     //pop element from queue
     void pop(){
        if(IsEmpty()){
            cout<<"Queue is underflow"<<endl;
            return;
        }else{
            cout<<"popped "<<front->data<<endl;
            Node *temp=front;
            front=front->next;
            delete temp;
        }
     }

     //start element of queue
     int start(){
        if(IsEmpty()){
            cout<<"Queue is empty"<<endl;
            return -1;
        }else{
            return front->data;
        }
     }
};

int main(){
    Queue q;
    q.push(1);
    q.push(20);
    q.push(300);
    q.push(40);
    q.pop();
    q.pop();
    q.push(500);
    cout<<"Top element: "<<q.start()<<endl;
    return 0;
}