//Recursive Linear Search
//Carries out linear search in recursive function calls 

#include<bits/stdc++.h>
using namespace std;

//recursive call strategy
int recLinearSearch(int a[],int l,int r,int k)
{
    //once right index becomes less than left index 
    //two pointers have crossed element doesn't exist in array return -1
    if(r<l)
        return -1;
    //if element found at leftindex position return l
    //if element found at rightindex position return r    
    if(a[l]==k)
        return l;
    if(a[r]==k)
        return r;
    //recursively call the function with left pointer incremented by 1 and right pointer decremented by 1
    return recLinearSearch(a,l+1,r-1,k);            
}


int main()
{
    //Accepting the n value for size of array
    int n;
    cout<<"Enter the size of array:"<<endl;
    cin>>n;

    int a[n];

    cout<<"Enter the elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int k;
    cout<<"Enter the element to be searched"<<endl;
    cin>>k;

    //call the function with params array,leftmost and right most indices and the search element
    int result = recLinearSearch(a,0,n-1,k);

    //ELEMENT FOUND
    //1-based indexing followed
    if(result!=-1){
        cout<<"The element is found at position: "<<result+1<<endl;
    }
    //ELEMENT NOT FOUND
    else{
        cout<<"Element is not present in the array"<<endl;
    }
}

//Time complexity : O(n)
//Space complexity : O(1)