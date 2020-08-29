//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/is-zoo-f6f309e7/


#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int zc=0,oc=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='z')
            zc++;
        else if(s[i]=='o')
            oc++;    
    }
    if(zc*2==oc)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;    

}