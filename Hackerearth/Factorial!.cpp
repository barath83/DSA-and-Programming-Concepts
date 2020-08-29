//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/find-factorial/

//Time complexity : O(n)

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long int f=1;
    for(int i=1;i<=n;i++)
    {
        f*=i;
    }
    cout<<f<<endl;
}