#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node* parents;

    Node(int data,Node *left,Node *right, Node *parents){
        this->data=data;
        this->left=left;
        this->right=right;
        this->parents=parents;
    }
};
   Node* root;

int main(){
    root=new Node(10,NULL,NULL,NULL);
    root->left=new Node(20,NULL,NULL,root);
    root->right=new Node(30,NULL,NULL,root);
    root->left->left=new Node(40,NULL,NULL,root);
    root->left->right=new Node(50,NULL,NULL,root);
    root->right->left=new Node(60,NULL,NULL,root);
    root->right->right=new Node(70,NULL,NULL,root);

    cout<<root->left->data<<" ";
    cout<<root->left->left->data<<" ";
    cout<<root->left->right->data<<"\n";

    cout<<root->right->data<<" ";
    cout<<root->right->left->data<<" ";
    cout<<root->right->right->data<<"\n ";




}