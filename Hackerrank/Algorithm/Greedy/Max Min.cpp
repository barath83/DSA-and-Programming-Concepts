//https://www.hackerrank.com/challenges/angry-children/problem


#include <bits/stdc++.h>

using namespace std;

int main()
{
    //taking n 
    int n;
    cin>>n;

    //taking size of the required of subarray
    int k;
    cin>>k;

    //array to store values
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    //sort the array in asc order
    sort(a,a+n);

    int mini = INT_MAX;

    //iterate from 0 till a element before n-k+1
    for(int i=0;i<n-k+1;i++){
        //in each iteration update the new minimum value
        //the minumum value is always found between the current element and the maximum boundary element in that range of subarray
        //if k = 3 and we are i=0 for an subarray we can have only three elements a[0] a[1] a[2] so we proceed the same way for every iteration

        mini = min(mini,a[i+k-1]-a[i]);
    }
    //print minimum value
    cout<<mini<<endl;
}
