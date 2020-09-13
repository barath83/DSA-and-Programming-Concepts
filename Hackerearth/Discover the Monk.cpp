//https://www.hackerearth.com/practice/algorithms/searching/binary-search/practice-problems/algorithm/discover-the-monk/


#include<bits/stdc++.h>
using namespace std;

int binarySearch(int a[],int l,int r,int x)
{
    if(r>=l)
    {
        int mid = l+(r-l)/2;

        if(a[mid]==x)
            return mid;
        if(a[mid]>x)
            return binarySearch(a,0,mid-1,x);
        else
            return binarySearch(a,mid+1,r,x);        
    }
    return -1;
}

int main()
{
    int n,q;
    cin>>n>>q;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);    
    for(int i=0;i<q;i++)
    {
        int x;
        cin>>x;
        int result = binarySearch(a,0,n-1,x);
        if(result==-1)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;    
    }    
}