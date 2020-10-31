/*
Destructors
Desctructor is a special member function that is called by the compiler when the scope of the object ends
*/

#include<bits/stdc++.h>
using namespace std;
 

class myClass
{
    public:
        int id;

    ~myClass()
    {
        cout<<"Destructor is called for id "<<id<<endl;
    }    
};


int main()
{
    myClass classObj1;
    classObj1.id = 7;

    int i = 0;

    while(i<5){
        myClass classObj2;
        classObj2.id = i;
        i++;
    } // Scope of classObj2 ends here
    //destructor will be called each time when the classObj2 goes out of scope 
    //i.e for 5 times here in a loop with changing values of i

} // Scope of classObj1 ends here

// destructor will be called as classObj1 goes out of scope at the end of the main for once 
// and the id value in this scope for classObj1 is 7


