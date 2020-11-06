/*
Postorder traversal
Algorithm
    LEFT - RIGHT - ROOT
    1. Traverse the left subtree,call postorder(left-subtree)
    2. Traverse the right subtree,call postorder(right-subtree)
    3. Visit the root
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

void postorder(Node* temp)
{
    if(temp==NULL)
        return;

    postorder(temp->left);
    postorder(temp->right);  
    cout<<temp->data<<" ";
      
}

int main()
{
    //making a tree 
    Node* root = new Node(10);
    root->left = new Node(11);
    root->right = new Node(9);
    root->left->left = new Node(7);
    root->right->left = new Node(15);
    root->right->right = new Node(8);

    //preorder traversal 
    cout << "Postorder traversal  ";
    postorder(root);

}    