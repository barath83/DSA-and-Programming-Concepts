#include<bits/stdc++.h>
using namespace std;

void merge(int a[],int l,int mid,int r)
{
    //declaring and assigning index variables for subarrays
    //leftindex should start from l which will be leftmost
    //rightindex should from mid+1 which is next position after the middle element
    int leftIndex = l;
    int rightIndex = mid+1;

    //declare a temp array of size extreme index which is r
    int tm_a[r];

    //index iterator for temp array
    int k = l;

    //while will proceed only till both left and right indexes are less than their end range 
    //which is mid for left sub array and r for right sub array respectively
    while(leftIndex<=mid && rightIndex<=r)
    {
        //if the current element in left subarray is lesser than current element in right subarray 
        //add left subarray element first into the temp array and increment both their indexes
        if(a[leftIndex] <= a[rightIndex]){
            tm_a[k] = a[leftIndex];
            k++;
            leftIndex++;
        }
        //else add the right subarray element into the temp array first increment both their indexes
        else{
            tm_a[k] = a[rightIndex];
            k++;
            rightIndex++;
        }
    }

    //if leftindex of leftsubarray is still less than it's boundary value i.e middle index value
    //fill all the remaining elements in the temp array
    while(leftIndex<=mid)
    {
        tm_a[k] = a[leftIndex];
        k++;
        leftIndex++;
    }

    //if rightindex of rightsubarray is still less than it's boundary value i.e r index value
    //fill all the remaining elements in the temp array 
    while(rightIndex<=r)
    {
        tm_a[k] = a[rightIndex];
        k++;
        rightIndex++;
    }

    //copy the temp array into original array
    for(int i=l;i<=r;i++){
        a[i] = tm_a[i];
    }

}


void mergesort(int a[],int l,int r)
{
    //if l<r it proceeds to subdivision else the recursion stops and the function before last recursive call is executed
    if(l<r){

        int mid = (l+r)/2;

        //subdividing left subarray into finest single elements
        mergesort(a,l,mid);

        //subdiving right subarray into finest single elements
        mergesort(a,mid+1,r);

        //merging arrays to form sorted arrays
        merge(a,l,mid,r);
    }
}


int main()
{
    //accepting the length of array
    int n;
    cin>>n;

    int a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    //output the original array
    cout<<"Array before sorting is ";
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";

    cout<<endl;    

    mergesort(a,0,n-1);

    cout<<"Array after sorting is ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

    cout<<endl;
    
}