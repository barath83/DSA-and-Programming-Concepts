#include<bits/stdc++.h>
using namespace std;
  
// A linked list node 
struct Node 
{ 
    int data; 
    struct Node *next; 
}; 

//function to push nodes in the list
void push(struct Node** head_ref, int new_data) 
{ 
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node)); 
    new_node->data  = new_data; 
    new_node->next = (*head_ref); 
    (*head_ref)    = new_node; 
} 

void deletewithkey(struct Node** head_ref,int key)
{
    //create two nodes as prev and curr and point them to head
    struct Node* curr = *head_ref;
    struct Node* prev = *head_ref;

    //if the head node itself contains the key
    if(curr!=NULL &&curr->data==key){
        *head_ref = curr->next;
        free(curr);
        return;
    }

    //traverse till the key to deleted is found
    //perform normal delete operation on that node
    while(curr!=NULL &&curr->data!=key){
        prev=curr;
        curr=curr->next;
    }

    //if the key is not in list
    if(curr==NULL)
        return;

    //perform linking to remove current node 
    prev->next = curr->next;

    //free memory of current node
    free(curr);    
}
  
void deletewithposition(struct Node** head_ref,int position)
{
    // if the head node itself is NULL
    if(*head_ref==NULL)
        return;

    // initialize temp node as curr and point it to head and previous node
    struct Node* curr = *head_ref;   
    struct Node* prev = *head_ref;

    // if the head node itself is the give position
    if(position==0){
        *head_ref = curr->next;
        free(curr);
        return;
    } 

    //traverse till the required position
    for(int i=0;i<position-1 && curr!=NULL;i++){
        prev=curr;
        curr=curr->next;
    }

    // if the position is more than the no of nodes 
    if(curr==NULL){
        return;
    }

    //if to be removed is the last node
    if(curr->next==NULL){
        prev->next = NULL;
        free(curr);
        return;
    }

    //perform linking to remove current node 
    prev->next = curr->next;

    //free memory of current node
    free(curr); 

}  


//function to print nodes in the list
void printList(struct Node *node) 
{ 
    while (node != NULL) 
    { 
        printf(" %d ", node->data); 
        node = node->next; 
    } 
    cout<<endl;
} 
  


int main() 
{ 
    /* Start with the empty list */
    struct Node* head = NULL; 
  
    push(&head, 7); 
    push(&head, 1); 
    push(&head, 3); 
    push(&head, 2); 
  
    cout<<"Linked list:"<<endl;
    printList(head); 
    deletewithkey(&head, 1); 
    cout<<"Linked list after deletion of node with data 1"<<endl;
    printList(head); 
    deletewithposition(&head, 2); 
    cout<<"Linked list after removing position 2"<<endl;
    printList(head); 
    return 0; 
}