//https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/case-conversion-d19fbcfe/description/


#include<bits/stdc++.h>
using namespace std;

string caseConversion (string s) {
  string ans="";

  if(s[0]<='Z'&&s[0]>='A'){
      ans+=s[0]+32;
  }
  else{
      ans+=s[0];
  }

    
  for(int i=1;i<s.length();i++)
  {
      if(s[i]>='A'&&s[i]<='Z')
      {
          ans=ans+'_';
          ans+=s[i]+32;
      }
      else if(s[i]>='a'&&s[i]<='z')
      {
          ans+=s[i];
      }
  }     
    return ans;
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    for(int t_i=0; t_i<T; t_i++)
    {
        string s;
        cin>>s;
        string out_;
        out_ = caseConversion(s);
        cout << out_;
        cout << "\n";
    }
}