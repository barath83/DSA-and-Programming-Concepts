//https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/cricket-rating-30/


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int cur=0,con=0;

    for(int i=0;i<n;i++)
    {
        cur = max(0,cur+a[i]);
        con = max(con,cur);
    }

    cout<<con<<endl;
}