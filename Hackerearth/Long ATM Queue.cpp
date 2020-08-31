//https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/long-atm-queue-3/


#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    long long int h[n];
    int c=1;
    for(int i=0;i<n;i++)
    {
        cin>>h[i];
    }

    for(int i=1;i<n;i++)
    {
        if(h[i]<h[i-1])
        {
            c++;
        }
    }
    cout<<c<<endl;
}

