#include<bits/stdc++.h>
using namespace std;


class Node {
    public:
        int data;
        Node* prev;
        Node* next;
};

void push(Node** headref,int newdata)
{
    //Initialize the newnode
    Node* newnode = new Node();
    //Add the newdata to new node
    newnode->data = newdata;
    //Point the newnode's previous to NULL as it is added at beginning
    newnode->prev = NULL;
    //Point newnode's next to the current head
    newnode->next = *headref;
    //If the head is not NULL
    //link head's previous to newnode
    if((*headref) != NULL)
        (*headref) -> prev = newnode;
    //Make the newnode as head node
    (*headref) = newnode;
}

void deleteNode(Node** headref,Node* delnode)
{
    if((*headref)==NULL||delnode==NULL){
        cout<<"Head or the node to be deleted cannot be null"<<endl;
    }

    //if the node to be deleted is the head node
    if((*headref) == delnode){
        (*headref) = delnode->next;
    }

    //if only the node to be deleted is not the last node
    //change it's next
    if(delnode->next!=NULL){
        delnode->next->prev = delnode->prev;
    }

    //if only the node to be deleted is not the first node
    //change it's previous
    if(delnode->prev!=NULL){
        delnode->prev->next = delnode->next;
    }

    //remove delnode
    free(delnode);
    return;
}


void printlist(Node* head){
    while(head!= NULL){
        cout<< head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}



int main()
{
    //Initialize a head for the linked list
    Node* head = NULL;

    //Adding nodes using push at beginning
    push(&head,4);
    push(&head,3);
    push(&head,2);
    push(&head,1);

    //print the list
    cout<<"Current Link List before deletion of nodes:"<<endl;
    printlist(head);

    //deleting nodes
    //nodeDelete takes two arguments one is the head pointer reference and the next is reference of node that is to be deleted
    deleteNode(&head,head->next);
    cout<<"Current Link List after deletion of second node:"<<endl;
    printlist(head);
    deleteNode(&head,head);
    cout<<"Current Link List after deletion of head node:"<<endl;
    printlist(head);

}

//Time complexity : O(1)
//Space complexity : O(1)