//https://www.hackerrank.com/challenges/game-of-thrones/problem


#include <bits/stdc++.h>

using namespace std;

int main()
{
    //accepts input
    string s;
    cin>>s;

    //using map to store frequency of characters
    unordered_map<char,int> mp;

    for(int i=0;i<s.length();i++)
    {
        mp[s[i]]++;
    }

    //declaring even and odd counter variables
    int evenc=0;
    int oddc=0;

    //iterating the map 
    //incrementing even and odd counter variables 
    for(auto x:mp){
        if(x.second%2==0){
            evenc++;
        }else{
            oddc++;
        }
    }

    //if the length of the string is 1 it's a palindrome
    if(s.length()==1){
        cout<<"YES"<<endl;
    }
    //if the length is greater than 1 
    //and it has to have one or more characters with even frequency
    //and it has to have 0 or min of 1 chacracter with odd frequency
    //to be a palindrome
    else if(s.length()>1 && evenc>=1 && oddc<=1){
        cout<<"YES"<<endl;
    }
    //else it is not a palindrome
    else{
        cout<<"NO"<<endl;
    }
}
