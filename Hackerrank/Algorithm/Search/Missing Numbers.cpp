//https://www.hackerrank.com/challenges/missing-numbers/problem


#include <bits/stdc++.h>

using namespace std;

int main()
{

    //take two maps to store frequency of all elements in two arrays
    unordered_map<int,int> mp1;
    unordered_map<int,int> mp2;

    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        mp1[a[i]]++;
    }

    int m;
    cin>>m;
    int b[m];
    for(int i=0;i<m;i++){
        cin>>b[i];
        mp2[b[i]]++;
    }

    //take a vector that stores ans values
    vector<int> ans;

    //iterate the first map
    for(auto x:mp1){
        //if the element is first map is not found in second map push the element into ans vector
        if(mp2.find(x.first)==mp2.end()){
            ans.push_back(x.first);
        }
        //if the element in first map is also in second map
        else{
            //if the element in the first and second map are in equal frequency 
            //make the element as 999999 it is marked as it's a element in both arrays
            if(x.second == mp2[x.first]){
                mp2[x.first] = 999999;
            }
            //if the element in the first and second map aren't in equal frequency 
            //push the element into ans vector
            //make the element as 999999 it is marked as it's a element in both arrays
            else if(x.second != mp2[x.first]){
                ans.push_back(x.first);
                mp2[x.first] = 999999;
            }
        }
    }

    //now run through the second array and push elements into ans vector that aren't marked as 999999
    //these are the elements that are present only in second array
    for(auto k:mp2){
        if(k.second != 999999){
            ans.push_back(k.first);
        }
    }

    //sort the ans vector and print it
    sort(ans.begin(),ans.end());

    for(auto j:ans){
        cout<<j<<" ";
    }
}
