//https://www.hackerearth.com/practice/algorithms/greedy/basics-of-greedy-algorithms/practice-problems/algorithm/in-search-of-samosa-pledge-easy-3/



#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int a[n];

    for(int i=0;i<n;i++)
        cin>>a[i];

    sort(a,a+n);  



    int samosas=0,cost=0;
    for(int i=0;i<n;i++)
    {
        cost+=a[i];
        if(cost<=k){
            samosas++;
        }else{
            break;
        }
          
    }  
    cout<<samosas<<endl;
}