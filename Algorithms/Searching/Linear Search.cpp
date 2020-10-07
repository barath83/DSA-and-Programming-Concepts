//Linear Search for element in a array
//Searches for the element continuously one by one in linear chain
//returns index if element found else returns -1

#include<bits/stdc++.h>
using namespace std;

int linearSearch(int a[],int n,int k)
{
    for(int i=0;i<n;i++)
    {
        //on iteration if the element equals to element in array 
        //return the index value + 1 as position(1-based indexing)
        if(a[i]==k){
            return i+1;
        }
    }
    //after complete iteration of the array if element not found return -1 as default
    return -1;
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

    int result = linearSearch(a,n,k);

    //ELEMENT FOUND
    if(result!=-1){
        cout<<"The element is found at position: "<<result<<endl;
    }
    //ELEMENT NOT FOUND
    else{
        cout<<"Element is not present in the array"<<endl;
    }
}
    