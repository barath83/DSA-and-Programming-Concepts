/*
Deletion of node in binary tree
Algorithm:
    1. Starting at the root node, find the deepest rightmost node in binary tree and the node which we want to delete
    2. Replace the deepest rightmost node's data with the data of node to be deleted
    3. Then delete the deepest right most node off the binary tree
*/

#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int val)
    {
        //val is the data value to be stored passed for each node
        data = val;
        //left and right child will pointed to NULL
        left = NULL;
        right = NULL;
    }
};


void inorder(Node* temp)
{
    if (temp == NULL)
        return;
 
    inorder(temp->left);
    cout << temp->data << ' ';
    inorder(temp->right);
}

void deleteDeepest(Node* root,Node* dnode)
{
    //push the root inside of q
    queue<Node*> q;
    q.push(root);

    //make a temp node 
    Node* temp;

    while(!q.empty())
    {
        //take temp as the current front node of q
        //pop it off q
        temp = q.front();
        q.pop();

        //if temp becomes the node to be deleted make temp as NULL
        //delete the node to be deleted and return back
        if(temp == dnode){
            temp = NULL;
            delete(dnode);
            return;
        }

        //if temp had a right
        //check if the right is the node to be deleted 
        //if yes make the right as NULL and delete the node
        //return    
        if(temp->right){
            if(temp->right == dnode){
                temp->right == NULL;
                delete(dnode);
                return;
            }
            //else push the right node in q
            else{
                q.push(temp->right);
            }
        }

        //repeat the same as right
        if(temp->left){
            if(temp->left == dnode){
                temp->left == NULL;
                delete(dnode);
                return;
            }
            else{
                q.push(temp->left);
            }
        }
    }


}

Node* deletion(Node* root,int key)
{
    //if the root turns out be NULL
    if(root==NULL){
        return NULL;
    }

    //if root doesn't have children
    if(root->left == NULL && root->right == NULL){
        //if root's data is the key return NULL as the data will be deleted
        if(root->data == key)
            return NULL;
        //else return root itself    
        else
            return root;    
    }

    queue<Node*> q;
    q.push(root);

    //take two nodes one for iteration to find the deepest rightmost node - temp
    //the other to find out the node to be deleted - keynode
    Node* temp;
    Node* keyNode = NULL;

    //iterate till the q is not empty
    while(!q.empty())
    {
        temp = q.front();
        q.pop();

        //if the current temp matches with the key to be deleted 
        //mark temp as the keynode
        if(temp->data == key)
            keyNode = temp;
        //push all left nodes in queue    
        if(temp->left)
            q.push(temp->left);
        //push all right nodes    
        if(temp->right)
            q.push(temp->right);        
    }

    //if keyNode is marked as not NULL 
    //take temp node's value and put it in x
    //delete the deepest right node
    //store x value back in the marked keynode
    if(keyNode != NULL){
        int x = temp->data;
        deleteDeepest(root,temp);
        keyNode->data = x;
    }
    //return the root back to main
    return root;
}


int main()
{
    //making a tree 
    Node* root = new Node(13);
    root->left = new Node(12);
    root->right = new Node(10);
    root->left->left = new Node(4);
    root->left->right = new Node(19);
    root->right->left = new Node(16);
    root->right->right = new Node(9);

    //inorder traversal of tree before deletion
    cout << "Inorder traversal before deletion: ";
    inorder(root);

    int key = 12;
    root = deletion(root,key);

    //inorder traversal of tree after deletion of key 12
    cout<<endl;
    cout << "Inorder traversal after deletion: ";
    inorder(root);
}