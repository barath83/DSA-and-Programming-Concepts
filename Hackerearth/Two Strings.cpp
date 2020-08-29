//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/two-strings-4/

//Time complexity : O(n)

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s1,s2;
        cin>>s1>>s2;
        int c1[26]={0};
        int c2[26]={0};
        
        for(int i=0;i<s1.length();i++)
        {
            c1[s1[i]-97]++;
        }

        for(int i=0;i<s2.length();i++)
        {
            c2[s2[i]-97]++;
        }

        int j=0;
        for(j=0;j<26;j++)
        {
            if(c1[j]==c2[j])
            {
                continue;
            }
            else
            {
                cout<<"NO"<<endl;
                break;
            }
        }
        if(j==26)
            cout<<"YES"<<endl;
    }
}