//https://www.hackerearth.com/practice/data-structures/hash-tables/basics-of-hash-tables/practice-problems/algorithm/cricket-balls/


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        long long int a[n];
        int ways=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int k;
        cin>>k;
        unordered_map<long long int,int> m;

        for(int i=0;i<n;i++)
        {
            if(m.find(k-a[i])==m.end()){
                m[a[i]]++;
            }else{
                ways = ways+m[k-a[i]];
                m[a[i]]++;
            }
        }
        cout<<ways<<endl;
    }
}