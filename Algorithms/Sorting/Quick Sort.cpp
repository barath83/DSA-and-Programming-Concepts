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
    int pivot = a[hi];
    int i = lo-1;

    for(int j=lo;j<=hi-1;j++){
        if(a[j]<pivot)
        {
            i++;
            swap(&a[i],&a[j]);
        }
        
    }
    swap(&a[i+1],&a[hi]);
    return i+1;
}



void quickSort(int a[],int lo,int hi)
{
    if(lo<hi){
        int piv = partition(a,lo,hi);

        quickSort(a,lo,piv-1);
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