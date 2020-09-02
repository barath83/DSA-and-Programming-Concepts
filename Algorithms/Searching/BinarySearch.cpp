#include<bits/stdc++.h>
using namespace std;

int binarySearch(int a[],int l,int r,int x) 
{
    //only condition is that at any point of time r should be equal or greater than l
    if(r>=l)
    {
        int mid = l+(r-l)/2;

        // if x is the middle element return in back
        if(a[mid]==x)
            return mid;
        //if the middle element is greater than x then x has to be in left subarray 
        if(a[mid]>x)
            return binarySearch(a,l,mid-1,x);    
        // else the element lies in right subarray
        else
            return binarySearch(a,mid+1,r,x);    

    }
    //else the element is not in list
    return -1;
}

int main()
{
    int a[] = {2,3,4,10,40};
    int x = 30,n=5;
    int result = binarySearch(a,0,n-1,x);
    (result == -1) ? cout << "Element is not present in array"
                   : cout << "Element is present at index " << result; 
}





