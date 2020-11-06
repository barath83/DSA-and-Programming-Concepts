/*
Inorder traversal
Algorithm
    LEFT - ROOT - RIGHT
    1. Traverse the left subtree,call inorder(left-subtree)
    2. Visit the root
    3. Traverse the right subtree,call inorder(right-subtree)
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
    if(temp==NULL)
        return;

    inorder(temp->left);
    cout<<temp->data<<" ";
    inorder(temp->right);    
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

    //inorder traversal 
    cout << "Inorder traversal  ";
    inorder(root);

}    