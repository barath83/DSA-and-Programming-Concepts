//https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/palindromic-numbers-7/


#include<bits/stdc++.h>
using namespace std;

bool palin(int i)
{
    int org = i;
    int rem,rev=0;
    while(i!=0)
    {
        rem = i%10;
        rev = rev*10+rem;
        i=i/10;
    }
    if(rev==org)
        return true;
    else
        return false;       
    
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        int count=0;
        for(int i=a;i<=b;i++)
        {
            if(palin(i))
            {
                count++;
            }
        }

        cout<<count<<endl;
    }
}