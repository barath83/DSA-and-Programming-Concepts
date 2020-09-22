#include<bits/stdc++.h>
using namespace std;

#define MAX 100
int a[MAX];
// initializing the first element in stack array as -1
int top = -1;
//indexing iterator for stack array
int i=0;

void push(int ele)
{
    if(i<MAX-1){
        a[++i] = ele;
        cout<<ele<<" pushed into stack"<<endl;
    }else{
        cout<<"Stack overflow"<<endl;
    }
}

int pop()
{
    if(i==0){
        cout<<"Stack underflow ";
        return 0;
    }else{
        int x = a[i--];
        return x;
    }
}

int peak()
{
    return a[i];
}

bool isEmpty()
{
    if(i<=0){
        return true;
    }else{
        return false;
    }
}


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

    cout<<pop()<<" is popped from stack"<<endl;
    cout<<pop()<<" is popped from stack"<<endl;
    cout<<pop()<<" is popped from stack"<<endl;
    cout<<pop()<<" is popped from stack"<<endl;
    
    

    cout<<peak()<<" is the peak element in stack"<<endl;
    
    cout<<isEmpty()<<endl;
    
}







