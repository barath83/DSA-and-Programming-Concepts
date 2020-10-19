#include<bits/stdc++.h>
using namespace std;

class Q{
    public:
        int data;
        Q* next;
   
};

//adds elements at the beginning of the list
void enqueue(Q** head,int ele){

    //creates a newnode 
    Q* newnode = new Q();
    //creates a lastnode reference that identifies the last node in the queue
    //initially it points to head reference
    Q* lastnode = *head;

    //adds the element in the newnode's data value
    newnode->data = ele;
    //points next of newnode to NULL
    newnode->next = NULL;

    //if head is NULL then newnode is the headref
    if(*head == NULL){
        *head = newnode;
        return;
    }

    //identify the lastnode and then append at last
    while(lastnode->next!=NULL)
        lastnode = lastnode->next;

    //linking lastnode's next to newnode
    lastnode->next = newnode;
    return;    
}

//removes elements at end
void dequeue(Q** head){
    
    //take two references called curr and temp initially point them to head
    Q* curr = *head;
    
    //traverse till the node before last node
    //each time change the curr node to the next node 
    while(curr->next->next!=NULL){
        curr = curr->next;
    }

    //after identifying the second last node which is curr node
    //free the node at curr->next which is ther last node
    free(curr->next);
    //point curr->next to NULL
    curr->next = NULL;
    return;
}


//prints all the elements in the queue
void printqueue(Q* node){
    while(node != NULL){
        cout<<" "<<node->data;
        node=node->next;
    }
}


int main()
{

    Q* head = NULL;

    //enqueue
    //adds the element to the end of the queue
    enqueue(&head,1);
    enqueue(&head,2);
    enqueue(&head,3);
    enqueue(&head,4);

    cout<<"Elements in queue after enqueue"<<endl;
    printqueue(head);
    cout<<endl;
    //dequeue
    //removes the element from the beginning
    dequeue(&head);

    cout<<"Elements in queue after dequeue"<<endl;
    printqueue(head);

}
