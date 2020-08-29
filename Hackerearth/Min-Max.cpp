//https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/min-max-3/


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    int f=0;
    set<int> s;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        s.insert(a[i]);
    }

    //using set to remove duplicate elements from the input 
    //copying contents from set into a vector
    vector<int>v(s.begin(),s.end());

    //traversing the vector to check all the elements are with a difference 1
    for(int i=0;i<v.size()-1;i++)
    {
        if(v[i+1]-v[i]!=1)
        {
            f=1;
            break;
        }
    }
    if(f==1)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;      
}