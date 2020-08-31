//https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/one-string-no-trouble-37037871/


#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int count =1,l=INT_MIN;

    for(int i=0;i<s.length()-1;i++)
    {
        if(s[i]!=s[i+1])
            count++;
        if(s[i]==s[i+1])
        {
            l = max(l,count);
            count = 1;
        }    
    }

    cout<<max(l,count)<<endl;

}