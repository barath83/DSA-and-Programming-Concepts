#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
        int data;
        Node* prev;
        Node* next;
};

void append(Node** headref,int newdata)
{
    //Initialize a new node 
    Node* newnode = new Node();
    //Initialize a last node
    Node* lastnode = *headref;

    //Add data in the new node
    newnode->data = newdata;
    //Make newnode's next as NULL as it is appended at the end
    newnode->next = NULL;

    //check if the head is NULL
    if(*headref == NULL){
        newnode->next = NULL;
        *headref = newnode;
        return;
    }

    //Iterate to find the last node
    while(lastnode->next!=NULL)
    {
        lastnode = lastnode->next;
    }

    //linking the newnode at end after identifying the lastnode
    lastnode->next = newnode;
    newnode->prev = lastnode;
    return;
}

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

void insertAfter(Node* prevnode,int newdata)
{
    if(prevnode == NULL){
        cout<<"Previous node cannot be null"<<endl;
    }

    //Initialize a newnode
    Node* newnode = new Node();
    //add newdata to newnode
    newnode->data = newdata;
    //Point newnode's next to prevnode's next
    newnode->next = prevnode->next;
    //Point prevnode's next to newnode
    prevnode->next = newnode;
    //Point newnode's prev to prevnode
    newnode->prev = prevnode;
    //Check if newnode is the last node
    //if not point newnode's next's prev which is nothing but the right adjacent to newnode's prev to the newnode
    if(newnode->next!=NULL)
        newnode->next->prev = newnode;
}

void printlist(Node* head){
    while(head!= NULL){
        cout<< head->data<<" ";
        head = head->next;
    }
}

int main()
{
    //Initialize a head for the linked list
    Node* head = NULL;

    //Intializing nodes using append
    append(&head,3);
    append(&head,4); 

    //Adding nodes using push at beginning
    push(&head,1);

    //Inserting nodes after a given node
    insertAfter(head,2);

    //print the list
    printlist(head);
}



//By Append operation adding nodes at the end of the list
//3 and 4 is appended one after the other
//List Currently: 3 --> 4

//By push operation adding nodes at the beginning of list
//1 is pushed at beginning 
//List currently: 1 --> 3 --> 4

//By insertAfter operation nodes are added at a specified place after a given node
//2 is added after head in the given list
//List currently : 1 --> 2 --> 3 --> 4