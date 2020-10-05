//https://www.hackerrank.com/challenges/sherlock-and-squares/problem?isFullScreen=true


#include <bits/stdc++.h>

using namespace std;

int main()
{
    int q;
    cin>>q;

    while(q--)
    {
        int a,b;
        cin>>a>>b;
    	int c=0;

        //iterate from square root value from lower range till and equal to the square root value of upper range
        for(int i=sqrt(a);i<=sqrt(b);i++)
        {
            int sr = i*i;
            //if the squared value is within the range then increment the counter
            if(sr>=a && sr<=b)
                c++;
        }
        cout<<c<<endl;
    }
}
