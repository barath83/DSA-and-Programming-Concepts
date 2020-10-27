//https://www.hackerrank.com/challenges/funny-string/problem


#include <bits/stdc++.h>

using namespace std;

int main()
{
    //queries
    int q;
    cin>>q;
    
    for(int i=0;i<q;i++)
    {
        //accepting string for each query
        string s;
        cin>>s;
        int n = s.length();

        //taking two arrays for normal and reversal of strings
        int fa[n];
        int ra[n];
        //taking a flag variable with f as 1
        int f=1;

        //for the normal string convert each character to it's ascii and store it in the same index in fa
        for(int i=0;i<n;i++){
            fa[i] = int(s[i]); 
        }
        
        //for the reversed string start from n-1 and go backwards
        //take another j to store the ascii value in same indices as the forward string's 
        int j=0;
        for(int i=n-1;i>=0;i--){
            ra[j] = int(s[i]);
            j++;
        }

        //run a loop from i till n-1
        //if the absolute difference between the adjacent elements are equal in ascii array of both original and reversed strings
          //keep f as 1
          //else make f as 0 and break
        for(int i=0;i<n-1;i++)
        {
            if(abs(fa[i]-fa[i+1]) == abs(ra[i]-ra[i+1])){
                f=1;
            }
            else{
                f=0;
                break;
            }
        }

        //if f is still 1 it's Funny 
        //else not
        if(f==1){
            cout<<"Funny"<<endl;
        }else{
            cout<<"Not Funny"<<endl;
        }

    }
}


//Time complexity : O(n)