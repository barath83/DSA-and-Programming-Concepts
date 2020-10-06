#include<bits/stdc++.h>
using namespace std;

class Q{

    public:
    int data;
    Q* next;
   
};

void enqueue(Q** head,int ele){

    Q* newnode = new Q();
    Q* lastnode = *head;
    newnode->data = ele;
    newnode->next = NULL;

    if(*head == NULL){
        *head = newnode;
        return;
    }

    while(lastnode->next!=NULL)
        lastnode = lastnode->next;

    lastnode->next = newnode;
    return;    
}

void dequeue(Q** head){

    Q* curr = *head;
    Q* temp = *head;
    while(curr->next->next!=NULL){
        curr = curr->next;
    }

    free(curr->next);
    curr->next = NULL;
    return;
}

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
    enqueue(&head,1);
    enqueue(&head,2);
    enqueue(&head,3);
    enqueue(&head,4);

    cout<<"Elements in queue after enqueue"<<endl;
    printqueue(head);

    //dequeue
    dequeue(&head);

    cout<<"Elements in queue after enqueue"<<endl;
    printqueue(head);

}
