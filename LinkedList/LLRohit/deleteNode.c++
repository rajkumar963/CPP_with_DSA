
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

 Node* createLL(int arr[],int idx,int size){
    if(idx==size){
        return NULL;
    }; 
    Node* temp = new Node(arr[idx]);
    temp->next = createLL(arr,idx+1,size);
    return temp;
  }

int main(){
    Node *head=NULL;
    int arr[]={10,20,30,40,50};
    //printing the linklist as a input
    head= createLL(arr,0,5);

    //deleting the node at start
    //    if(head!=NULL){
    //        Node *temp = head;
    //        head = head->next;
    //        delete temp;
    //    }

    //deleting the node at the end
    //    if(head!=NULL){
    //        //only one node present
    //        if(head->next==NULL){
    //            delete head;
    //            head = NULL;
    //        }
    //        //more then one node present
    //         else{
    //             Node *temp=head;
    //             Node *prev = NULL;
    //             while(temp->next!=NULL){
    //                 prev = temp;
    //                 temp = temp->next;
    //             }
    //             prev->next = temp->next;
    //             delete temp;
    //         }
    //    }

    //deleting the node at the given position
    int x=4;
    Node *temp1 = head;
    x = x-1;
    while(x--){
        temp1 = temp1->next;
    }
    Node *temp2 = temp1->next;
    temp1->next = temp1->next->next;
    delete temp2;


    //printing the linklist
     Node *temp = head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    
}