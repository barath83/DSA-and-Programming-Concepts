#include<bits/stdc++.h>
using namespace std;

//intializing a array with max capacity as 100
#define MAX 10
int a[MAX];
// initializing the first element in stack array as -1
int top = -1;
//indexing iterator for stack array
int i=0;

void push(int ele)
{
    //checking if the current iterator value is less than the size of stack array
    //if so, push the element to the stack
    if(i<MAX-1){
        //increment the iterator value and add the element in that index position
        a[++i] = ele;
        cout<<ele<<" pushed into stack"<<endl;
    }
    //if not, then it's a  overflow 
    else{
        cout<<"Stack overflow"<<endl;
    }
}

//pops the latest element off the stack
int pop()
{
    //if iterator equals 0 then it's a underflow
    if(i==0){
        cout<<"Stack underflow ";
        return 0;
    }
    //else store the latest element in x by using iterator and post decrement the same for next iteration
    else{
        int x = a[i--];
        return x;
    }
}

//returns the current topmost element in stack 
int peak()
{
    return a[i];
}

//checks if the stack isempty if so prints 1
//else prints 0
bool isEmpty()
{
    //if the iterator i value is less than or equals 0 then stack is empty
    if(i<=0){
        return true;
    }else{
        return false;
    }
}

//routine that prints all the elements in the stack 
void print()
{
    int j = i+1;
    while(j--)
    {
        cout<<a[j]<<" ";
    }
}


int main()
{
    // initializing the first element in stack array as -1
    a[i] = top;
    
    //elements pushed inside stack
    push(1);
    push(2);
    push(3);
    push(4);

    cout<<"Elements in stack after push"<<endl; 
    print();
    cout<<endl;

    //popping elements in stack 
    cout<<pop()<<" is popped from stack"<<endl;
    cout<<pop()<<" is popped from stack"<<endl;
    cout<<pop()<<" is popped from stack"<<endl;
    cout<<pop()<<" is popped from stack"<<endl;
    
    //Showing the top most element in stack - peak
    //Since all elements are popped -1 is the current peak element
    cout<<peak()<<" is the peak element in stack"<<endl;
    
    //checks if the stack isempty if so prints 1
    //else prints 0
    cout<<isEmpty()<<endl;
    
}

//All operations in stack are in Time complexity : O(1)





