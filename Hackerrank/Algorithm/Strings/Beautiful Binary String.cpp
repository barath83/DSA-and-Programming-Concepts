//https://www.hackerrank.com/challenges/beautiful-binary-string/problem?isFullScreen=true

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;

    string s;
    cin>>s;

    int c=0;

    for(int i=0;i<n;){
        //if the substring in current indices is 010 
        //increment counter and increment index value by 3 places
        //else increment index value by 1 place
        if(s[i]=='0' && s[i+1]=='1' &&s[i+2]=='0'){
            c++;
            i+=3;
        }else{
            i++;
        }
    }

    cout<<c<<endl;
}
