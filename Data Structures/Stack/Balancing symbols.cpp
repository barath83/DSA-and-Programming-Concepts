#include <bits/stdc++.h> 
using namespace std;


bool checkBalance(string s)
{
    stack<char> st;
    char c;

    for(int i=0;i<s.length();i++)
    {
        if(s[i] =='('|| s[i] =='{'|| s[i] =='['){
            st.push(s[i]);
            continue;
        }

        if(s.empty())
            return false;

        switch(s[i])
        {
            case ')':
                c = st.top();
                st.pop();
                if(c=='{'||c=='[')
                    return false;
                break;    

            case '}':
                c = st.top();
                st.pop();
                if(c=='('||c=='[')
                    return false;
                break;    

            case ']':
                c = st.top();
                st.pop();
                if(c=='{'||c=='(')
                    return false;
                break;                    

        }    
    }
    
    return (st.empty());
}



int main()
{

    string s = "{[(]}";

    if(checkBalance(s)){
        cout<<"Balanced"<<endl;
    }else{
        cout<<"Not Balanced"<<endl;
    }
             

}