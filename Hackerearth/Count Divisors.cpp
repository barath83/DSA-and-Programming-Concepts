//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/count-divisors/

//Time complexity : O(n)

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l,r,k;
    int c = 0;
    cin>>l>>r>>k;
    for(int i=l;i<=r;i++)
    {
        if(i%k==0)
            c++;
    }
    cout<<c<<endl;
}
