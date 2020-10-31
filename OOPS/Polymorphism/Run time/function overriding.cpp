/*
    Runtime polymorphism - achieved by function overriding 
    Virtual functions - A virtual function is a member function which is declared in base class 
    using the virtual keyword and it is re-defined again in a derived class, when this happens it's called 
    as function overriding,the base function is said to be overridden
    For this the derived class function will be called using a base class pointer
*/

#include<bits/stdc++.h>
using namespace std;

class base{
    public:
        //base class print()
        //function which we want to override in derived class so using virtual keyword
        virtual void print(){
            cout<<"This is the base class print()"<<endl;
        }
        //base class show()
        void show(){
            cout<<"This is base class show()"<<endl;
        }
};

class derived:public base
{
    public:
        //derived class print(), since it's already defined in base class here we are overriding it in derived class with a new defintion
        void print(){
            cout<<"This is print() in derived class"<<endl;
        }

        //derived class show()
        void show(){
            cout<<"This is show() in derived class"<<endl;
        }
};

int main()
{
    //base class pointer    
    base *bptr;
    //derived class object
    derived d;
    //base class pointer holding object reference of derived class
    bptr= &d;

    //using base class pointer  the virtual function is binded at runtime
    //so the overriden fuctionality in base class will be displayed
    bptr->print();

    //using base class pointer again,will call the base class show()
    //as we use a base class pointer to access a base class method which is not overriden
    bptr->show();
}