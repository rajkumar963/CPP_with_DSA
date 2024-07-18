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

// inserting the node at the beginning
// int main()
// {
//     Node *head = new Node(10);
//     // linklist does not exist
//     for (int i = 0; i < 5; i++)
//     {
//         if (head == NULL)
//         {
//             head = new Node(10);
//         }
//         // linklist exist
//         else
//         {
//             Node *temp;
//             temp = new Node(20);
//             temp->next = head;
//             head = temp;
//         }
//     }
//     //printing the linklist
//     Node *temp = head;
//     while (temp != NULL)
//     {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
// }

// inserting the node at the end
// int main()
// {
//     Node *head , *Tail;
//     head = Tail = NULL;
// int arr[]={1,2,3,4,5};
// for(int i=0;i<5;i++){
//     if(head==NULL){
//         head = Tail = new Node(arr[i]);
//         Tail=head;
//     }else{
//         Tail->next = new Node(arr[i]);
//         Tail = Tail->next;
//     }
// }
// //printing the linklist
// Node *temp = head;
// while (temp)
// {
//     cout << temp->data << " ";
//     temp = temp->next;
// }
// }

//add node at end through recursion
  Node* createLL(int arr[],int idx,int size){
    if(idx==size){
        return NULL;
    }; 
    Node* temp = new Node(arr[idx]);
    temp->next = createLL(arr,idx+1,size);
    return temp;
  }
//   Node* createll(int arr[],int size,int idx,Node *prev){
//       if(idx==size){
//           return prev;
//       };
//       Node* temp = new Node(arr[idx]);
//       temp->next =prev; 
//       return createll(arr,size,idx+1,temp);
//   }
// int main(){
//     Node *head=NULL;
//     int arr[]={10,20,30,40,50};
// //printing the linklist as a input
// //      head= createLL(arr,0,5);
// //   //printing the linklist
// //     Node *temp = head;
// //     while (temp)
// //     {
// //         cout << temp->data << " ";
// //         temp = temp->next;
// //     }
// //reverse the linklist
//     head= createll(arr,5,0,head);
//     //printing the linklist
//     Node *temp = head;
//     while (temp)
//     {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
// }


// inserting the node at the given position
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