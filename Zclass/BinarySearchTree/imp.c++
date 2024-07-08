#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;
    // Node* size;
    Node(int d)
    {
        data = d;
        left = NULL;
        right = NULL;
        //size = 0;
    }
};
class BST
{
public:
    Node *root;
    BST()
    {
        root = NULL;
    }
    void insert(int d)
    {
        if (root == NULL)
        {
            root = new Node(d);
        }
        else
        {
            insert(root, d);
        }
    }
    void insert(Node *root, int d)
    {
        if (d < root->data)
        {
            if (root->left == NULL)
            {
                root->left = new Node(d);
            }
            else
            {
                insert(root->left, d);
            }
        }
        else
        {
            if (root->right == NULL)
            {
                root->right = new Node(d);
            }
            else
            {
                insert(root->right, d);
            }
        }
    }   
    //delete the node
};



int main()
{
  Node* root = new Node(10);
  root->left = new Node(20);
  root->right = new Node(30);
  root->left->left = new Node(40);
  root->left->right = new Node(50);
  root->right->left = new Node(60);
  root->right->right = new Node(70);
  root->left->left->left = new Node(80);
  root->left->left->right = new Node(90);
  root->right->right->left=new Node(100);
  root->right->right->right=new Node(110);

  // cout<<root->left->data<<" ";
  // cout<<root->left->left->data<<" ";
  // cout<<root->left->right->data<<"\n";
  cout<<root->right->data<<" ";
  cout<<root->right->left->data<<" ";
  cout<<root->right->right->data<<" ";
  cout<<root->right->right->right->data<<"\n";
  

}