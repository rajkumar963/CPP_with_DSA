// #include<bits/stdc++.h>
// using namespace std;

// class Node{
//     public:
//     int val;
//     Node* next;
//     Node(int val){
//         this->val=val;
//          this->next=NULL;
//     }
// };

// int main(){ 
//     Node* a=new Node(10);
//     Node* b=new Node(20);
//     Node* c=new Node(30);
//     Node* d=new Node(40);
//     a->next=b;
//     b->next=c;
//     c->next=d;
//     Node* temp=a;
//     while(temp!=NULL){
//         cout<<temp->val<<" ";
//         temp= temp->next;
//     }
// }

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

void display(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp= temp->next;
    }
    cout<<endl;
}
int size(Node* head){
    Node* temp=head;
    int cnt=0;
    while(temp!=NULL){
        cnt++;
        temp= temp->next;
    }
    return cnt;
}

int main(){ 
    Node* a=new Node(10);
    Node* b=new Node(20);
    Node* c=new Node(30);
    Node* d=new Node(40);
    Node* e=new Node(50);
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    display(a);
    cout<<size(a)<<endl;

}