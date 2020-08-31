//https://www.hackerearth.com/practice/algorithms/searching/linear-search/practice-problems/algorithm/maximum-sum-4-f8d12458/


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    long long int a[n];
    long long int c=0,sum=0;
    long long int maxi = INT_MIN;
    for(long long int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n,greater<int>());


    for(long long int i=0;i<n;i++)
    {
        sum+=a[i];
        if(sum>=maxi){
            maxi = sum;
            c++;
        }
    }

    cout<<maxi<<" "<<c<<endl;
}