#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
         this->next=NULL;
    }
};
int main(){
  Node a(10);
  Node b(20);
  Node c(30);
  Node d(40);
  a.next=&b;
  b.next=&c;
  c.next=&d;
  d.next=NULL;
  // cout<<(*a.next).val<<endl;//derefrencing b value printed
  // cout<<a.next->next->val<<endl;//value printed of c
  // cout<<a.val<<" "<<a.next->val<<" "<<a.next->next->val<<" "<<a.next->next->next->val<<endl

  Node temp=a;
  while(1){
    cout<<temp.val<<endl;
    if(temp.next==NULL){break;}
    temp= *(temp.next);
  
}
}