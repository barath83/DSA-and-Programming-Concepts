//https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/hawkeye-and-floodfill/description/


// Write your code here
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i,j,p;
    cin>>i>>j>>p;
    int a[n][n];

    for(int r=0;r<n;r++)
    {
        for(int s=0;s<n;s++)
        {
            int v = p - max(abs(i-r),abs(j-s));
            if(v<0)
                cout<<0<<" ";
            else
                cout<<v<<" ";    
        }
        cout<<endl;
    } 
}