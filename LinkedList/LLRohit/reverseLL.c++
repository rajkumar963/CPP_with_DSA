#include<bits/stdc++.h>
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

    //inserting the node at the given position
   int x=3;
   int val=60;
      
      Node *temp1 = head;
      x--;
      while(x--){
          temp1 = temp1->next;
      };
      Node *newnode = new Node(val);
      newnode->next = temp1->next;
      temp1->next = newnode;

    //printing the linklist
     Node *temp = head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    
    
}

// class Solution {
// public:
//    //recursion
//     ListNode *Reverse(ListNode *curr,ListNode *prev){
//         if(curr==NULL)  return prev;
//         ListNode *fut=curr->next;
//         curr->next=prev;
//         return Reverse(fut,curr);
//     }

//     ListNode* reverseList(ListNode* head) {
// //method 1
//         // vector<int> ans;
//         // ListNode* temp=head;
//         // while(temp!=NULL){
//         //     ans.push_back(temp->val);
//         //     temp=temp->next;
//         // }

//         // int i=ans.size()-1;
//         // temp=head;
//         // while(temp){
//         //     temp->val=ans[i];
//         //     i--;
//         //     temp=temp->next;
//         // }
//         // return head;

// //method 2
//     //     ListNode *curr=head, *prev=NULL,*fut=NULL;
//     //     while(curr){
//     //         fut=curr->next;
//     //         curr->next=prev;
//     //         prev=curr;
//     //         curr=fut;
//     //     }
//     //    head= prev;
//     //    return head;

//      return Reverse(head,NULL);
//     }
// };