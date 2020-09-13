//https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/micro-and-array-update/


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int a[n];
        int mini = 9999999999999;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]<mini)
                mini = a[i];
        }

        if(mini>=k)
            cout<<"0"<<endl;
        else
            cout<<k-mini<<endl;    
       
    }
}