//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/mojtaba-prepares-contest-29b2a044/description/


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int ca,cb;
        cin>>ca>>cb;

        int n;
        cin>>n;

        int minp,maxp;

        //identifying which ballon costs minimum
        //if they are equal in cost it doesn't matter
        if(ca<cb){
            minp=ca;
            maxp=cb;
        }else if(cb<ca){
            minp=cb;
            maxp=ca;
        }else{
            minp=ca;
            maxp=cb;
        }

        int count_a=0,count_b=0;
        int tp=0;
        for(int i=0;i<n;i++)
        {
            int a,b;
            cin>>a>>b;
            
            //counting number of contest wins in 1 and 2
            if(a==1)
                count_a++;
            if(b==1)
                count_b++;

        }

        //if contest 1 has more wins minimum priced ballon has to be give for that and maximum priced ballon for contest 2
        //else vice versa
        //if count is equal it doesn't matter
        if(count_a>count_b){
            tp=tp+count_a*minp+count_b*maxp;
        }else if(count_a<count_b){
            tp=tp+count_a*maxp+count_b*minp;
        }else{
            tp=tp+count_a*minp+count_b*maxp;
        }

        cout<<tp<<endl;
    }

}