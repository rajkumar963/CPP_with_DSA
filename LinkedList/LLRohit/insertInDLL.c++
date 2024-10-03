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
int main(){
    Node *head=NULL,*tail=NULL;
    //create doubly linked list
    int arr[]={10,20,30,40,50};
    for(int i=0;i<5;i++){
        //linklist does not exist
        if(head==NULL){
            head=new Node(arr[i]);
            tail=head;
        }else{
            //linklist exist
            Node *temp=new Node(arr[i]);
            tail->next=temp;
            temp->prev=tail;
            tail=temp;
        }
        
    }

    //inserting the node at the beginning
    //linklist does not exist
    // if(head==NULL){
    //     head = new Node(1);
    // }
    // //linklist exist
    // else{
    //     Node *temp=new Node(1);
    //     temp->next=head;
    //     head->prev=temp;
    //     head=temp;
    // }

    //inserting the node at the end
    //linklist does not exist
    // if(head==NULL){
    //     head = new Node(7);
    //     tail=head;
    // }
    // //linklist exist
    // else{
    //     Node *temp=new Node(7);
    //     tail->next=temp;
    //     temp->prev=tail;
    //     tail=temp;
    // }

    // Insert at any given position
      int pos=2;
      //insert at start
      if(pos==0){
        //linklist does not exist
        if(head==NULL){
            head = new Node(12);
        }
        //linklist exist
        else{
            Node *temp=new Node(12);
            temp->next=head;
            head->prev=temp;
            head=temp;
        }
      }else{
        Node *curr=head;
        while(pos--){
            curr=curr->next;
        }
      //insert at end
      if(curr->next==NULL){
        Node *temp=new Node(12);
         temp->prev=curr;
        curr->next=temp;
       

      }else{
      //insert at middle
        Node *temp=new Node(15);
        temp->next=curr->next;
        temp->prev=curr;
        curr->next=temp;
        temp->next->prev=temp;
        
      }
      }
    //printing the linklist
    Node * trav=head;
    while(trav){
        cout<<trav->data<<" ";
        trav=trav->next;
    }

}