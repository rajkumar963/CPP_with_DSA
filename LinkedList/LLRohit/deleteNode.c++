// #include<bits/stdc++.h>
// using namespace std;
// #include <bits/stdc++.h>
// using namespace std;

// class Node
// {
// public:
//     int data;
//     Node *next;
//     Node(int data)
//     {
//         this->data = data;
//         this->next = NULL;
//     }
// };

// //  Node* createLL(int arr[],int idx,int size){
// //     if(idx==size){
// //         return NULL;
// //     }; 
// //     Node* temp = new Node(arr[idx]);
// //     temp->next = createLL(arr,idx+1,size);
// //     return temp;
// //   }

// int main(){
//     Node *head=NULL;
//     int arr[]={10,20,30,40,50};
//     //printing the linklist as a input
//     head= createLL(arr,0,5);

//     //inserting the node at the given position
//    int x=3;
//    int val=60;
      
//       Node *temp1 = head;
//       x--;
//       while(x--){
//           temp1 = temp1->next;
//       };
//       Node *newnode = new Node(val);
//       newnode->next = temp1->next;
//       temp1->next = newnode;

//     //printing the linklist
//      Node *temp = head;
//     while (temp)
//     {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
    
// }