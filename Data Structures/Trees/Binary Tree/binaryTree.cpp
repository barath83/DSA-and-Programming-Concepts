/**
 * Binary Tree
 *  A binary trees is a tree in which each node has only two children.
 *  These two child nodes are left and right of the parent node.
 
 Representation of tree starts with topmost node which is called as Root a pointer is given to the root,
 A tree node has three parts
 1. Data
 2. Pointer to left child
 3. Pointer to right child
 */

#include<bits/stdc++.h>
using namespace std;

struct Node {

    //3 parts of a tree's node
    int data;
    struct Node* left;
    struct Node* right;

    Node(int val)
    {
        //val is the data value to be stored passed for each node
        data = val;
        //left and right child will pointed to NULL
        left = NULL;
        right = NULL;
    }
};

int main()
{
    struct Node* root = new Node(1);
    //1 is the new Node created 1->L = NULL and 1->R = NULL

    root->left = new Node(2);
    root->right = new Node(3);

    //1 
    //1->L = 2 
    //1->R =3 

    root->left->left = new Node(4);
    //1 
    //1->L = 2 
    //1->R = 3 
    //2->L = 4

}