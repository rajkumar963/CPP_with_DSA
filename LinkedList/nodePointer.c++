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

// void display(Node* head){
//     Node* temp=head;
//     while(temp!=NULL){
//         cout<<temp->val<<" ";
//         temp= temp->next;
//     }
//     cout<<endl;
// }
// int size(Node* head){
//     Node* temp=head;
//     int cnt=0;
//     while(temp!=NULL){
//         cnt++;
//         temp= temp->next;
//     }
//     return cnt;
// }

// int main(){ 
//     Node* a=new Node(10);
//     Node* b=new Node(20);
//     Node* c=new Node(30);
//     Node* d=new Node(40);
//     Node* e=new Node(50);
//     a->next=b;
//     b->next=c;
//     c->next=d;
//     d->next=e;
//     display(a);
//     cout<<size(a)<<endl;

// }



// #include <bits/stdc++.h>
// using namespace std;
// class Node
// { // user defined data type
// public:
//     int val;
//     Node *next;
//     Node(int val)
//     {
//         this->val = val;
//         this->next = NULL;
//     }
// };

// class LinkedList
// { // user defined data structure
//     Node *head;
//     Node *tail;
//     int size;

// public:
//  LinkedList()
//     {
//         head = NULL;
//         tail = NULL;
//         size = 0;
//     }

//     void insertAtTail(int val)
//     {
//         Node *temp = new Node(val);
//         if (size == 0)
//         {
//             head = tail = temp;
//         }
//         else
//         {
//             tail->next = temp;
//             tail = temp;
//         }
//         size++;
//     }

    
//      void insertAtHead(Node* head,int val){
//         Node* temp= new Node(val);
//         if(size==0) {head=tail=temp;}
//         else{
//             temp->next=head;
//             head=temp;
//         }
//         size++;
        
//      }

//     void display()
//     {
//         Node *temp = head;
//         while (temp != NULL)
//         {
//             cout << temp->val << " ";
//             temp = temp->next;
//     }
//         cout<<endl;
//     }
// };
// int main()
// {
//     LinkedList ll;
//     ll.insertAtTail(10);
//     ll.insertAtTail(20);
//     ll.insertAtTail(30);
//     ll.insertAtTail(40);
//     ll.insertAtTail(50);
//     ll.display();
//     ll.insertAtHead(0,34);
//     ll.display();
    
//     return 0;
   
// }



#include<iostream>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

class LinkedList {
private:
    Node* head;
    Node* tail;
    int size;

public:
    LinkedList() {
        head = tail = NULL;
        size = 0;
    }

    void display() {
        Node* temp = head;
        while(temp != NULL) {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    int getSize() {
        return size;
    }

    void displayRec(Node* node) {
        if(node == NULL) return;
        cout << node->val << " ";
        displayRec(node->next);
    }

    void displayRec1(Node* node) {
        if(node == NULL) return;
        displayRec1(node->next);
        cout << node->val << " ";
    }

    void insertAtTail(int val) {
        Node* t = new Node(val);
        if(size == 0) {
            head = tail = t;
        } else {
            tail->next = t;
            tail = t;
        }
        size++;
    }

    void insertAtHead(int val) {
        Node* temp = new Node(val);
        if(size == 0) {
            head = tail = temp;
        } else {
            temp->next = head;
            head = temp;
        }
        size++;
    }

    void insertAtPos(int pos, int val) {
        if(pos == 0) {
            insertAtHead(val);
        } else if(pos == size) {
            insertAtTail(val);
        } else {
            Node* temp = head;
            for(int i=1; i<pos; i++) {
                temp = temp->next;
            }
            Node* t = new Node(val);
            t->next = temp->next;
            temp->next = t;
            size++;
        }
    }

    void deleteAtHead() {
        if(size==0) {cout<<"List is empty, nothing to delete"<<endl;return;}
        if(size==1) {
            delete head;
            head = tail = NULL;
        } else {
            Node* temp = head;
            head = head->next;
            //delete temp;
        }
        size--;
    }

    void deleteAtTail() {
        if(size==0){ cout<<"List is empty, nothing to delete"<<endl; return;}
        if(size==1) {
            delete head;
            head = tail = NULL;
        } else {
            Node* temp = head;
            while(temp->next != tail) {
                temp = temp->next;
            }
            //delete tail;
            temp->next = NULL;
            tail = temp;
        }
        size--;
    }

    void deleteAtPos(int pos) {
        if(size==0) {cout<<"List is empty, nothing to delete"<<endl;return;}
        else if(pos<0 || pos>=size) {cout<<"invalid position"<<endl;return;}
        else if(pos == 0) {
            deleteAtHead();
        } else if(pos == size-1) {
            deleteAtTail();
        } else {
            Node* temp = head;
            for(int i=1; i<pos; i++) {
                temp = temp->next;
            }
            temp->next = temp->next->next;
            size--;
        }
    }

   
};

int main() {
    LinkedList list;
    list.insertAtTail(10);
    list.insertAtTail(20);
    list.insertAtTail(30);
    list.insertAtTail(40);
    list.insertAtTail(50);

   // cout << "Initial list: ";
    list.display();

    list.insertAtTail(60);
    list.insertAtTail(70);
    //cout << "After inserting at tail: ";
    list.display();

    list.insertAtHead(34);
    list.insertAtHead(2);
    // cout << "After inserting at head: ";
     list.display();

     list.insertAtPos(3, 0);
     list.display();
     list.deleteAtHead();
     list.display();

     list.deleteAtTail();
     list.display();    

     list.deleteAtPos(3);
     list.display();

          list.deleteAtPos(2);
     list.display();

    // cout << "Size of the list: " << list.getSize() << endl;

    // cout << "Recursive display: ";
    // list.displayRec(list.getHead());
    // cout << endl;

    // cout << "Reverse recursive display: ";
    // list.displayRec1(list.getHead());
    // cout << endl;

    return 0;
}