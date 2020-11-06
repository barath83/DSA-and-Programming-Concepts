/*
Preorder traversal
Algorithm
    ROOT - LEFT - RIGHT
    1. Visit the root
    2. Traverse the left subtree,call preorder(left-subtree)
    3. Traverse the right subtree,call preorder(right-subtree)
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

void preorder(Node* temp)
{
    if(temp==NULL)
        return;

    cout<<temp->data<<" ";
    preorder(temp->left);
    preorder(temp->right);    
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
    cout << "Preorder traversal  ";
    preorder(root);

}    