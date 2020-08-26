#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
        int data;
        Node* next;
};

void push(Node** headref,int newdata){
    
    //CREATE A NEW NODE
    Node* newnode = new Node();

    //Initialize data value for new node
    newnode->data = newdata;

    //Make next of new node to point to existing head
    newnode->next = *headref;

    //Make new node as the current head
    *headref = newnode;

}

void append(Node** headref,int newdata)
{
    //CREATE NEW NODE
    Node* newnode = new Node();

    //Last node
    Node* lastnode = *headref;

    //data for newnode
    newnode->data = newdata;

    //newnode will become the lastnode in list since it's append
    newnode->next = NULL;

    //if there are no nodes in list currently appended newnode becomes the head and control returns back to main
    if(*headref == NULL){
        *headref = newnode;
        return;
    }

    //if not traverse till the last node
    while(lastnode->next!=NULL){
        lastnode = lastnode->next;
    }

    //add newnode next to lastnode
    lastnode->next = newnode;
    return;

}

void insert(Node *previous,int newdata)
{
    //CREATE NEW NODE
    Node* newnode = new Node();

    //assign value to node
    newnode->data = newdata;

    //point newnode's next to the node to which the previous's next points to
    newnode->next = previous->next;

    //point previous's next to newnode to complete insertion
    previous->next = newnode;
}

void printlist(Node* head){
    while(head!= NULL){
        cout<< head->data<<" ";
        head = head->next;
    }
}

int main()
{
    //head node creation
    Node* head=NULL;
    
    //initializing nodes using append
    append(&head,3);
    append(&head,4);

    //adding node using push at front of linked list
    push(&head,1);

    //adding node using insertion after 1 before 3
    insert(head->next,2);
  
    printlist(head); 
}