#include<bits/stdc++.h>
using namespace std;

void swap(int *a,int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}


int partition(int a[],int lo,int hi)
{
    //taking pivot as the hi pointer element
    int pivot = a[hi];
    //intiliazing i to -1 
    int i = lo-1;

    //iteration from lo pointer to an element before than hi pointer
    for(int j=lo;j<=hi-1;j++){
        //if the current element is lesser than pivot
        if(a[j]<pivot)
        {
            //increment the value of i 
            i++;
            //swap the element at curent index with the element at ith index
            swap(&a[i],&a[j]);
        }
    }
    //after complete iteration for this function call 
    //swap the i+1th element with the pivot element
    //pivot now occupies it's exact sorted position i.e elements to left of pivot are smaller than pivot
    //elements to right of pivot are larger than pivot
    swap(&a[i+1],&a[hi]);
    //return i+1 as it is the new position of pivot 
    return i+1;
}



void quickSort(int a[],int lo,int hi)
{
    //if lo pointer is lesser than high pointer proceed
    if(lo<hi){
        //identify the pivot's new position by calling partition function
        int piv = partition(a,lo,hi);

        //call quickSort on the left side elements from pivot's position
        quickSort(a,lo,piv-1);
        //call quickSort on the right side elements from pivot's position
        quickSort(a,piv+1,hi);
    }
}


int main()
{
     //accepting the length of array
    int n;
    cout<<"Enter the number of elements:"<<endl;
    cin>>n;

    int a[n];

    cout<<"Enter the elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    //output the original array
    cout<<"Array before sorting is ";
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";

    cout<<endl;    

    quickSort(a,0,n-1);

    cout<<"Array after sorting is ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

    cout<<endl;
}