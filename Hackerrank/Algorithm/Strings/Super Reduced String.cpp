//https://www.hackerrank.com/challenges/reduced-string/problem?isFullScreen=true


#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;

    vector<char> v;
    //take the first character of string sequence and push it in vector
    v.push_back(s[0]);

    string res="";

    //iterate from second till last character
    for(int i=1;i<s.length();i++)
    {
        //if the current character equals last character in vector
        //then erase the last character in vector and proceed next character in loop
        if(s[i]==v[v.size()-1])
        {
            v.erase(v.begin()+v.size()-1);
        }
        //if not push the current character in to the vector
        else
        {
            v.push_back(s[i]);
        }
    }

    for(auto i:v){
        res+=i;
    }

    if(res==""){
        cout<<"Empty String"<<endl;
    }else{
        cout<<res<<endl;
    }
}
