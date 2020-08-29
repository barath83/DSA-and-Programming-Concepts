// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/array-sum-2-725368ac/

// Time complexity : O(n)

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    long long int a[n];
    long long int sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    cout<<sum<<endl;
}