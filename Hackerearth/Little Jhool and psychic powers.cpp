//https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/psychic-powers/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;

    if(s.find("000000") == -1 && s.find("111111") ==-1)
    { 
        cout<<"Good luck!"<<endl;
    }else
    {
        cout<<"Sorry, sorry!"<<endl;
    }

}