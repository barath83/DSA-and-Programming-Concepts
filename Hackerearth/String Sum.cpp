//hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/string-sum/

//Time complexity : O(n)

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int sum = 0;
    for(int i=0;i<s.length();i++)
    {
        int x = s[i] - 'a' + 1;
        sum+=x;
    }
    cout<<sum<<endl;
}