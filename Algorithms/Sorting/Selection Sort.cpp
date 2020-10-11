#include<bits/stdc++.h>
using namespace std;

void swap(int *a,int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

void selectionSort(int a[],int n)
{
    int min;

    for(int i=0;i<n-1;i++)
    {
        min = i;

        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[min]){
                min = j;
            }
        }
        swap(&a[min],&a[i]);
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

    selectionSort(a,n);

    cout<<"Array after sorting is ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

    cout<<endl;
}