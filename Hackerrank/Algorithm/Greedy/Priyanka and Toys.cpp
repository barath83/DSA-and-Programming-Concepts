//https://www.hackerrank.com/challenges/priyanka-and-toys/problem

#include <bits/stdc++.h>

using namespace std;

int main()
{
    //taking the number of toys
    int n;
    cin>>n;

    //array to store weight values 
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    //sort them in asc order
    sort(a,a+n);

    //initialize index variable j = 0
    //and count equals 0
    int j=0;
    int count=0;

    //iterate till index var is less than n
    while(j<n)
    {
        //the maximum current limit per container is stored in cur_limit
        int cur_limit = a[j]+4;
        //increment j till it doesn't exceed the limit 
        //once it does while breaks and it increments the count and proceeds further
        while(j<n && a[j]<=cur_limit){
            j++;
        }
        //count is incremented as soon as the limit per box is reached
        count++;
    }
    //print count
    cout<<count<<endl;
}
