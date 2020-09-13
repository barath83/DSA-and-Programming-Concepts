//https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/print-hackerearth/


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int count=0;
    unordered_map<char,int> m;
    if(n<11)
    {
        cout<<0<<endl;
    }
    else{
        for(int i=0;i<n;i++)
        {
            m[s[i]]++;
        }

        while(m['h']>1 && m['a']>1 && m['c']>0 && m['k']>0
                && m['e']>1 && m['r']>1 && m['t']>0)
        {
            m['h']-=2;
            m['a']-=2;
            m['c']-=1;
            m['k']-=1;
            m['e']-=2;
            m['r']-=2;
            m['t']-=1;
            count++;
        }

        cout<<count<<endl;
        count=0;
    }

}