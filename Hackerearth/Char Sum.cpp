//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/char-sum-2d3a6ab5/description/


#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int sum=0;
    for(int i=0;i<s.length();i++)
    {
        sum+=s[i]-97+1;
    }
    cout<<sum<<endl;
}