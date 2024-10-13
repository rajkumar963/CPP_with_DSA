#include<bits/stdc++.h>
using namespace std;

class Node{
  public:
  int data;
  Node *next ,*prev;
  Node(int val){
    data = val;
    next = NULL;
    prev = NULL;
  }
};

class Dequeue{
  public:
  Node *front,*rear;
  Dequeue(){
    front = NULL;
    rear = NULL;
  }
  //push front
   void push_front(int x){
    //empty
        if(front == NULL){
            front=rear = new Node(x);
            cout<<"pushed front "<<x<<endl;
            return;
        }else{
            Node *temp = new Node(x);
            temp->next = front;
            front->prev = temp;
            front = temp;
            cout<<"pushed front "<<x<<endl;
            return;
        }
        cout<<endl;
    }

  //push back
  void push_back(int x){
    //empty
    if(front == NULL){
        front=rear = new Node(x);
        cout<<"pushed back "<<x<<endl;
        return;
    }else{
        Node *temp = new Node(x);
        rear->next = temp;
        temp->prev = rear;
        rear = temp;
        cout<<"pushed back "<<x<<endl;
        return;
    }
  }
  //pop front
  void pop_front(){
        if(front == NULL){
            cout<<"Queue is empty"<<endl;
            return;
        }else{
            Node *temp = front;
            cout<<"popped front "<<front->data<<endl;
            front = front->next;
            delete temp;
            // if greater than one node
            if(front){
                front->prev = NULL;
            }else{
                //only one node
                rear = NULL;
            }
        }
    }

  //pop back
  void pop_back(){
    if(front == NULL){
        cout<<"Queue is empty"<<endl;
        return;
    }else{
        Node *temp = rear;
        cout<<"popped back "<<rear->data<<endl;
        rear = rear->prev;
        delete temp;
        // if greater than one node
        if(rear){
            rear->next = NULL;
        }else{
            //only one node
            front = NULL;
        }
    }
  }
  //start
    int start(){
        if(front == NULL){
            cout<<"Queue is empty"<<endl;
            return -1;
        }else{
            return front->data;
        }
    }

  //end
    int end(){
        if(front == NULL){
            cout<<"Queue is empty"<<endl;
            return -1;
        }else{
            return rear->data;
        }
    }
};

int main(){
Dequeue dq;
dq.push_front(10);
dq.push_front(20);
dq.push_front(30);
dq.push_back(40);
dq.push_back(50);
dq.pop_front();
dq.pop_back();
cout<<dq.start()<<endl;
cout<<dq.end()<<endl;
}