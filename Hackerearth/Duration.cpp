//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/duration/description/


//Write your code here
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int sh,sm,eh,em;
        cin>>sh>>sm>>eh>>em;

        int wh = eh-sh-1;
        int wm = (60-sm)+em;

        if(wm>59){
            wh= wh+1;
            wm = wm-60;
        }        

        cout<<wh<<" "<<wm<<endl;
    }
}