//https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/digit-problem/


#include<bits/stdc++.h>
using namespace std;
int main()
{
    string x;
    int k;
    cin>>x;
    cin>>k;

    for(int i=0;i<x.length();i++)
    {
        if(x[i]!='9')
        {
            if(k)
            {
                x[i]='9';
                k--;
            }
        }
    }
    cout<<x;
}
