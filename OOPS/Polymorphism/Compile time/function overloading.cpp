/*
FUNCTION OVERLOADING
Multiple functions which can have the same name but different parameters in terms of difference in number of arguments
or change in type of arguments is called function overloading,they are called as overloaded functions
*/

#include <bits/stdc++.h>
using namespace std;

class poly {
    public:
    
    //Here we have three functions with same name but parameters differ by 
    // - the number of arguments in first two functions
    // - the type of arguments in the last function
    //there addTo is a overloaded function
    int addTo(int a){
        return a+5;
    }

    int addTo(int a,int b){
        return a+b+5;
    }

    float addTo(float c,float d,float e){
       return c+d+e+5.0; 
    }
};

int main()
{
    poly obj;

    cout<<"Function addTo with one argument of type int :"<<obj.addTo(2)<<endl;

    cout<<"Function addTo with two arguments of type int :"<<obj.addTo(2,3)<<endl;

    cout<<"Function addTo with three arguments of type float :"<<obj.addTo(2.1,3.2,4.3)<<endl;
}


/*
    Functions that cannot be overloaded

    - Function declarations that differ exactly only by return type
    - Member functions with same name and parameter cannot be overloaded if one of them is a static member
    - Parameter declarations that differ only in pointer Vs array are equivalent so cannot be overloaded
*/
