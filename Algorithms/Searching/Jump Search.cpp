//Jump Search
//Traverses a array by performing jumps with a specified number of indexes skipped for each jump
//Optimal jump value should be the sqrt value of n -> size of the array
//Prerequisite is array must be sorted


#include<bits/stdc++.h>
using namespace std;

int jumpSearch(int a[],int n,int k)
{
    //k - element to be searched
    //skip value is the sqrt value of size of array
    int skip = sqrt(n);
    //dclare two variables as start and end
    int start = 0,end=0;

    //traverse the array from zero 
    //for every iteration i should b incremented by the skip value 
    for(int i=0;i<=n;i+=skip){
        //if element in current iteration equals k return it's position
        if(a[i]==k)
            return i;
        //if the element in current iteration is greater than k 
        //assign i-skip value to start i.e the last iteration index value
        //assign i value to end i.e the current iteration index value
        //break from for loop    
        if(a[i]>k){
            start = i - skip;
            end = i;
            break;
        }    
    }

    //iterate from start till end range as the element will be within this range as it as a sorted a array
    //do linear search for this range and return the index of element if found
    for(int j=start;j<=end;j++){
        if(a[j]==k)
            return j;
    }

    //element is not found so return -1
    return -1;

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

    int result = jumpSearch(a,n,k);

    //ELEMENT FOUND
    if(result!=-1){
        cout<<"The element is found at position: "<<result+1<<endl;
    }
    //ELEMENT NOT FOUND
    else{
        cout<<"Element is not present in the array"<<endl;
    }
}


//Time complexity : O(sqrt(n))
//Space complexity : O(1)