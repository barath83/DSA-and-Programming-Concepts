//Given a number n, print all primes smaller than or equal to n. It is also given that n is a small number.

//Input : n =10
//Output : 2 3 5 7 

#include <bits/stdc++.h> 
using namespace std; 

void sieveof(int n)
{
    //declare a boolean array with size n+1
    //initialize all the elements in the array to true initially such that they will remain true if they are prime
    //else they will turn false that means not a prime number
    bool prime[n+1];
    memset(prime,true,sizeof(prime));

    //iteration starts from 2,the first prime number
    //if the square of the current number is within range of n then proceed inside next loop
    for(int p=2;p*p<=n;p++){

        //if the number turns out to prime when it checks out to be true
        //all it's multiples will not a prime number starting from p*p all it's multiple will be marked false
        if(prime[p]==true)
        {
            //start from p*p and mark all multiples from then on as false
            for(int i=p*p;i<=n;i+=p)
                prime[i]=false;
        }
    }

    //iterate from 2 till n
    //print the numbers which are prime that is their value will be true
    for(int p=2;p<=n;p++)
    {
        if(prime[p])
            cout<<p<<" ";
    }

}


int main()
{
    //the integer n value
    int n = 50;
    cout<<"Following are the prime numbers less than 50"<<endl;
    sieveof(n);
}