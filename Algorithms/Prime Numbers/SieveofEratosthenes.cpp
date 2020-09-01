//Given a number n, print all primes smaller than or equal to n. It is also given that n is a small number.

//Input : n =10
//Output : 2 3 5 7 

#include <bits/stdc++.h> 
using namespace std; 

void sieveof(int n)
{
    bool prime[n+1];
    memset(prime,true,sizeof(prime));

    for(int p=2;p*p<=n;p++){

        if(prime[p]==true)
        {

            for(int i=p*p;i<=n;i+=p)
                prime[i]=false;
        }
    }


    for(int p=2;p<=n;p++)
    {
        if(prime[p])
            cout<<p<<" ";
    }

}


int main()
{
    int n = 50;
    cout<<"Following are the prime numbers less than 50"<<endl;
    sieveof(n);
}