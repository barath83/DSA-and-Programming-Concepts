//https://www.hackerrank.com/challenges/sherlock-and-the-beast/problem


#include <bits/stdc++.h>
using namespace std;

int main()
{   
    //get cases number
    int t;
    cin>>t;

    while(t--)
    {
        //take number
        int n;
        cin>>n;

        //declare the variable that keep tracks of how many times '33333' will appear    
        int numofThrees=0;

        //iterate till the number is not divisible by 3
          // for each time decrement the number by 5
          // increment the numofThrees variable
        while(n%3!=0){
            n=n-5;
            numofThrees++;
        }

        //if n goes less than 0 print -1 as we cannot have a result with this n 
        if(n<0){
            cout<<-1<<endl;
        }
        //else
        else{
            //while the n!=0
             //print '555' and also for each time decrement n by 3
            while(n!=0){
                cout<<"555";
                n=n-3;
            }
            //iterate for the numofThrees and print '33333' for each time
            for(int i=0;i<numofThrees;i++){
                cout<<"33333";
            }
            cout<<endl;
        }

        
    }
}
