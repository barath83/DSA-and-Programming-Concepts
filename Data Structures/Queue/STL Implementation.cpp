#include<bits/stdc++.h>
using namespace std;

int main()
{
    //declaring a queue that can store integer values
    queue<int> q;

    //adding elements to queue 
    //elements gets added to the end of the list 
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    //printing the first element in queue
    cout<<"The front element in queue is "<<q.front()<<endl;

    //dequeue
    //popping elements from back
    q.pop();
    q.pop();

    //printing remaining elements in queue
    //iterate till the q is empty print the elements
    cout<<"Elements currently in queue"<<endl;
    while(!q.empty()){
        int x = q.front();
        cout<<x<<" ";
        q.pop();
    }

}