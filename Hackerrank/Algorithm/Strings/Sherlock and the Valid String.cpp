//https://www.hackerrank.com/challenges/sherlock-and-valid-string/problem

#include <bits/stdc++.h>

using namespace std;

int main() {
   
    string s;
    cin>>s;

    int a[26] = {0};
    int count=0;

    //run through the string and increment it's frequency of characters
    for(int i=0;i<s.length();i++){
        a[s[i]-97]++;
    }

    //sort the frequency array
    sort(a,a+26);

    //put a value called k equals 0
    int k = 0;

    //iterate until frequency array value remains 0
    //find the end point with k variable
    for(int i=0;i<26;i++){
        if(a[i]==0){
            k++;
        }
    }

    //if kth place is 1 increment both k and count as we are allowed to remove 1 character from string
    if(a[k]==1){
        k++;
        count++;
    }

    //starting from k+1 no the frequency of characters should be same no character should change
    for(int i=k+1;i<26;i++)
    {
        if(a[i]!=a[k]){
            count++;
        }
    }

    //if there is a change count will be greater than 1 and NO will be the answer else YES
    if(count>1){
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
    }
}
