//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/anagrams-651/

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
        cin>>s1;
        cin>>s2;
        int f[26] = {0};
        int ans = 0;

        for(int i=0;i<s1.length();i++)
        {
            f[s1[i]-'a']++;
        }
        for(int i=0;i<s2.length();i++)
        {
            f[s2[i]-'a']--;
        }

        for(int i=0;i<26;i++){
            ans+= abs(f[i]);
        }
        cout<<ans<<endl;
    }
}