//https://www.hackerrank.com/challenges/two-strings/problem

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int p;
    cin>>p;

    for(int i=0;i<p;i++)
    {
        string s1,s2;
        cin>>s1>>s2;

        //to check for a minimum of one substring the characters should be unique
        set<char> st1;
        set<char> st2;

        for(int i=0;i<s1.length();i++){
            st1.insert(s1[i]);
        }

        for(int i=0;i<s2.length();i++){
            st2.insert(s2[i]);
        }

        //use map to store the frequency of characters 
        //use the same map for both the string sets
        unordered_map<char,int> mp;

        set<char> :: iterator it;

        for(it=st1.begin();it!=st1.end();it++){
            mp[*it]++;
        }
        
        for(it=st2.begin();it!=st2.end();it++){
            mp[*it]++;
        }

        //iterate the map 
        //is there is atleast one element with a frequency more than 1 break and print "yes"
        //else its no
        int f=0;
        for(auto x:mp){
            if(x.second>1){
                f=1;
                break;
            }else{
                f=0;
            }
        }

        if(f==1){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}
