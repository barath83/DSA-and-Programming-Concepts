#include<bits/stdc++.h>
using namespace std;

//swap function to swap the two positions in array which have been called for
void swap(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int a[],int n)
{
    //always take an element and compare with adjacent element 
    //if curr element is greater than adjacent element swap their places so that it becomes in increasing order
    //repeat the process for each element in array considering all the elements after the current index
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                swap(&a[i],&a[j]);
            }
        }
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

    bubbleSort(a,n);

    cout<<"Array after sorting is ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

    cout<<endl;
}


//Time Complexity : O(n^2)
//Space Complexity : O(1)