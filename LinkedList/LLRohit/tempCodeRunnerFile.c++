 if(head==NULL){
        head = new Node(10);
    }
    //linklist exist
    else{
        Node *temp=new Node(10);
        temp->next=head;
        head->prev=temp;
        head=temp;
    }