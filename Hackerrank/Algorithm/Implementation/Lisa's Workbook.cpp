//https://www.hackerrank.com/challenges/lisa-workbook/problem


#include <bits/stdc++.h>
using namespace std;

int main()
{
    //get number of chapters and the number of problems per page

    int n,k;
    cin>>n>>k;

    //initialize problemsperchap and page and specialpages all as 0 
    int problemsperChap,page=0,spPage=0;

    //iterate for the number of chapters
    for(int i=0;i<n;i++){
        //get problems count in each chapter
        cin>>problemsperChap;
        //increment page
        //for every new chapter we have to start a new page
        page++;
        //take problem number initially as 1 
        //for every new chapter the problem number should also start from 1
        int problemNo = 1;
        //if problemsperChap is greater than 0 that means ,still problems exist for a chapter
        while(problemsperChap>0)
        {
            //decrement it's count
            problemsperChap--;
            //if the problem number and page number matches increment specialPages
            if(problemNo == page){
                spPage++;
            }
            //if the problem number and maximum problems per page meets move to next page
            if(problemNo%k==0 && problemsperChap!=0){
                page++;
            }
            //increment problem number each time
            problemNo++;
        }
    }
    //print special pages count
    cout<<spPage<<endl;
}
