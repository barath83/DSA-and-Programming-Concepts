//https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/no-sharing-capillary-82ed3fe2/


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,p,q,r;
        cin>>n>>p>>q>>r;
        int c=0;
        
        for(int i=1;i<=n;i++)
        {
            if((i%p==0)&&(i%q!=0)&&(i%r!=0))
                c++;
            else if((i%p!=0)&&(i%q==0)&&(i%r!=0))
                c++;
            else if((i%p!=0)&&(i%q!=0)&&(i%r==0))
                c++;         
        }

        cout<<c<<endl;
    }
}