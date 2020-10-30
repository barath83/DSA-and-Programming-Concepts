//https://www.hackerrank.com/challenges/beautiful-pairs/problem


#include <bits/stdc++.h>

using namespace std;

int main()
{   
    //taking input n 
    int n;
    cin>>n;

    //taking two arrays with at most maximum array limit 
    int a[10003] = {0};
    int b[10003] = {0};

    int x,y;
    
    //counting frequency of elements in both the arrays
    for(int i=0;i<n;i++){
        cin>>x;
        a[x]++;
    }

    for(int i=0;i<n;i++){
        cin>>y;
        b[y]++;
    }

    //initialize a counter to zero
    int matchPairs = 0;
    //iterate from 0 till 10003 
    //for each i find the minimum between both the frequency array and add the value to matchPairs
    for(int i=0;i<10003;i++){
        matchPairs+=min(a[i],b[i]);
    }

    //if matchPairs is less than 1 can increment the value as we still can change a element in array B 
    //so increment by 1
    if(matchPairs<n){
        matchPairs+=1;
    }
    //if matchPairs is equal to or greater than n we have to definitely change a element in array B
    //so decrement by 1
    else{
        matchPairs-=1;
    }
    //print value
    cout<<matchPairs<<endl;
}
