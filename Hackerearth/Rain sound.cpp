//https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/rain-41f57695/


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,r,s;
        cin>>l>>r>>s;
        
        // calculating the ceil of left range boundary value using formula
        l = (l-1)/s+1;
        // calculating the ceil of right range boundary value using formula
        r = r/s;

        if(l>r)
            cout<<-1<<" "<<-1<<endl;
        else
            cout<<l<<" "<<r<<endl;          
    }
}