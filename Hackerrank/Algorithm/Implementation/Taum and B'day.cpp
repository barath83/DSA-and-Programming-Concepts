//https://www.hackerrank.com/challenges/taum-and-bday/problem

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;

    //for every test case 
    while(t--)
    {
        //taking the number of black and white gifts
        long long int b,w;
        cin>>b>>w;
 
        //taking the cost of black and white gifts
        long long int bc,wc,z;
        cin>>bc>>wc>>z;

        //initializing cost as 0
        long long int cost = 0;

        
        //number of black gifts multiplied by min(black gift cost, whitegift cost+conversion cost)
        //plus the vice versa for white gifts
        //since we need to minimize cost for each case we try to check the minimum cost among original cost and conversion cost
        
        cost  = (b*min(bc,wc+z)) + (w*min(wc,bc+z));
        cout<<cost<<endl;
    }
}
