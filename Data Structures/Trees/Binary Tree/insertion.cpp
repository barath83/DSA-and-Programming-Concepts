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

void insert(Node* root,int key)
{
    //creating a queue which can hold data of type Node* which is nodes in tree
    queue<Node*>q;
    //pushing the root in queue
    q.push(root);

    //run a loop till the queue isn't empty
    while(!q.empty())
    {
        //create a temp node
        //take the front node of queue
        Node* temp = q.front();
        q.pop();

        //check if it has a left node then push it inside the queue
        //else insert the new node there as it is the first possible vacant spot
        if(!temp->left){
            //insert the new key here
            //break
            temp->left = new Node(key);
            break;
        }else{
            q.push(temp->left);
        }

        //check if it has a right node then push it inside the queue
        //else insert the new node there as it is the first possible vacant spot
        if(!temp->right){
            //insert the new key here
            //break
            temp->right = new Node(key);
            break;
        }else{
            q.push(temp->right);
        }
    }
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

    //inorder traversal of tree before insertion
    cout << "Inorder traversal before insertion: ";
    inorder(root);

    //inserting a node with value 12 where ever possible
    int key = 12;
    insert(root,key);

    //inorder traversal of tree after insertion of key 12
    cout<<endl;
    cout << "Inorder traversal after insertion: ";
    inorder(root);
}