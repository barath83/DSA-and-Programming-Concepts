//https://www.hackerearth.com/problem/algorithm/check-palindrome-1/


#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    string sr="";

    int size = s.length();
    int i=size-1;

    for(i;i>=0;i--)
    {
        sr+=s[i];
    }
    
    if(sr==s)
        cout<<"Y"<<endl;
    else
        cout<<"N"<<endl;    

}    
    