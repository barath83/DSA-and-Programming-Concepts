//https://www.hackerrank.com/challenges/jim-and-the-orders/problem

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    
    //take two arrays one for order number and the other for prepartion time
    int order[n+1];
    int prep[n+1];
    
    //accept order number and preparation time for each order and store them in respective arrays
    for(int i=1;i<=n;i++)
    {
        int o,p;
        cin>>o>>p;
        order[i] = o;
        prep[i] = p;
    }

    //add the order number and prep time to calculate time taken to deliver
    int tt[n+1];
    for(int i=1;i<=n;i++)
    {
        tt[i] = order[i]+prep[i];
    }
 
    //make a vector pair 
    //each pair should have the total delivery time,customer number
    vector< pair <int,int> > v;

    for(int i=1;i<=n;i++)
    {
        v.push_back(make_pair(tt[i],i));
    }
    //sort the vector pair based on the total delivery time 
    sort(v.begin(),v.end());
    
    //finally print the customer number in the order in which they will be delivered
    for(int i=0;i<n;i++){
        cout<<v[i].second<<" ";
    }
    
}

//Time complexity : O(n logn)