//https://www.hackerrank.com/challenges/gem-stones/problem

#include <bits/stdc++.h>

using namespace std;

int main()
{
    //take the number of cases
    int n;
    cin>>n;

    //take a array to store char frequency 
    int a[26] = {0};

    //set 
    set<char> st;

    for(int i=0;i<n;i++){
        //accept string for each case
        string s;
        cin>>s;
        //iterate through string insert them in set to get only unique characters
        for(int i=0;i<s.length();i++){
            st.insert(s[i]);
        }
        //iterate set and add frequency of characters in array
        for(auto x:st){
            a[x - 'a']++;
        }
        //after each string clear the set for the next string so there are no char missed out
        st.clear();
    }

    
    int c = 0;
    //iterate the array 
    for(int i=0;i<26;i++){
        //if any frequency is greather than or equal to n then the stones are in all the strings
        //increment gemstone count
        if(a[i]>=n){
            c++;
        }
    }
    //print answer 
    cout<<c<<endl;
}
