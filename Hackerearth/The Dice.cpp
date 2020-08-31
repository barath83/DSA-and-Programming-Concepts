//https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/the-dice-d4dc5b11/


#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    string t="";
    if(s[s.length()-1]=='6'){
        cout<<-1<<endl;
    }else{
        for(int i=0;i<s.length();i++)
        {
            //append to string all the numbers except 6 and the length of new string is the req answer
            if(s[i]!='6'){
                t+=s[i];
            }else{
                continue;
            }
        }
        cout<<t.length()<<endl;
    }
    
}