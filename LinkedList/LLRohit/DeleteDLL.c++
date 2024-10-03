#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int data;
        Node* next;
        Node* prev;

    Node(int value){
       data=value;
       next=prev=NULL;
    }
};

Node * createDLL(int arr[],int size,int idx,Node *back){
    if(idx==size){
        return NULL;
    }
    Node * temp = new Node(arr[idx]);
    temp->next = back;
    temp->next=createDLL(arr,size,idx+1,temp);
    return temp;
}
int main(){
    Node *head=NULL;
    //create doubly linked list
    int arr[]={10,20,30,40,50};

    head= createDLL(arr,0,5,NULL);

   // Delete at start
    if(head!=NULL){
        Node *temp = head;
        head = head->next;
        delete temp;
        head->prev = NULL;
    }
   



     //printing the linklist
     Node *temp = head;
    while (temp)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}