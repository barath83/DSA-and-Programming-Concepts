#include<bits/stdc++.h>
using namespace std;


int main()
{
    //declare a stack which can store integer values
    stack<int> s;

    //pushing values into stack
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    //printing the peak element in stack
    cout<<"The topmost element in stack is "<<s.top()<<endl;

    //popping off elements in stack
    s.pop();
    s.pop();

    //printing all the remaining elements in stack
    //loop till the stack becomes empty
    cout<<"Elements in stack currently:"<<endl;
    while(!s.empty())
    {
        //for each iteration print the topmost element
        //pop the element from stack 
        int x = s.top();
        s.pop();
        cout<<x<<" ";
    }
    cout<<endl;
}