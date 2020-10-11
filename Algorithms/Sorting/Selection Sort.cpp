#include<bits/stdc++.h>
using namespace std;

//swap routine 
void swap(int *a,int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

void selectionSort(int a[],int n)
{
    //intializing the min index variable which will be the index for the smallest element in that iteration
    int min;

    //iterate i from 0 to i less than n-1
    for(int i=0;i<n-1;i++)
    {
        //for each iteration store i value in min
        min = i;
        //iterate the inner loop with j variable from i+1'th index to j less than n
        for(int j=i+1;j<n;j++)
        {
            //if the current element is less than the min index element
            //replace min index value by current index value
            if(a[j]<a[min]){
                min = j;
            }
        }
        //swap min index element with current i index element
        //so for each iteration the min element in array in unsorted array is moved to sorted array at the beginning
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