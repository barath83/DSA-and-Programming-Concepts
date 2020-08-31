//https://www.hackerearth.com/practice/algorithms/searching/linear-search/practice-problems/algorithm/rest-in-peace-21-1/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int n,temp;
       cin>>n;
       int r1,r2,f=0;
       temp = n;
       while(temp!=0)
       {
           r1 = temp%10;
           temp = temp/10;
           r2 = temp%10;

            //for the number to be 21 r1 has to be 1 and r2 has to be 2
           if(r1==1 && r2==2){
               f=1;
               break;
           } 
       }

       if(f==1 || n%21==0)
           cout<<"The streak is broken!"<<endl;
       else
           cout<<"The streak lives still in our heart!"<<endl;
       

    }
}