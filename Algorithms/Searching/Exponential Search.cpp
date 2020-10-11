/*
Exponential Search
Algo: 
- Find range where element is present
- Do Binary Search in above found range.

Exponential search is better than binary search for array with bounded values as it finds the range where binary search 
can be done rather than applying binary search on whole array.

Find the index range by multiplying i by 2 until we find a element greater than k and then use binary search on that range.

*/

#include<bits/stdc++.h>
using namespace std;

int binarySearch(int a[],int l,int r,int k)
{
    if(r>=l)
    {
        int mid = l+(r-l)/2;

        //if k is the mid index element return it
        if(a[mid]==k)
            return mid;
        //if mid index element lesser than k return the right subarray for binary search    
        //else left subarray
        if(a[mid]<k)
            return binarySearch(a,mid+1,r,k);
        else
            return binarySearch(a,l,mid-1,k);        
    }

}


int expSearch(int a[],int n,int k)
{
    //if the element at 0 is the required k return 0
    if(a[0]==k)
        return 0;

    int i = 1 ;
    while(i<n&&a[i]<=k){
        i = i*2;
    }    

    return binarySearch(a,i/2,min(i,n),k);
}


int main()
{
    //Accepting the n value for size of array
    int n;
    cout<<"Enter the size of array:"<<endl;
    cin>>n;

    int a[n];

    cout<<"Enter the elements in sorted order"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int k;
    cout<<"Enter the element to be searched"<<endl;
    cin>>k;

    int result = expSearch(a,n,k);

    //ELEMENT FOUND
    if(result!=-1){
        cout<<"The element is found at position: "<<result+1<<endl;
    }
    //ELEMENT NOT FOUND
    else{
        cout<<"Element is not present in the array"<<endl;
    }
}

//Space complexity : O(1)
//Time complexity : O(log n)