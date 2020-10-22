#include<bits/stdc++.h>
using namespace std;

class myClass {                 //classname is myClass which is userdefined followed by the keyword class
    public:                    //access specifier 
        int rollNo;           //data member i.e integer variable
        string studentName;  //data member i.e string variable

        //member function i.e a function within the class that can manipulate or access data members of class
        //member function here printWelcome is defined within the class, it can be defined both inside or outside of the class
        void printWelcome(){
            cout<<"Hello "+studentName+", Welcome to class"<<endl;
        }
        
        //member function declared inside but defined out outside
        void rollNoNotify();

};  //class should be terminated by ;


void myClass :: rollNoNotify(){
    cout<<"Your Roll Number is "<<rollNo<<endl;
}    

int main()
{
    myClass classObj;   // Object is created for myClass

    //data members of the class can be accessed by using .(dot) operator

    classObj.rollNo = 17;           //accessing rollNo attribute using object of class 
    classObj.studentName = "BBB";   //accessing studentName attribute using object of class 

    //printing attribute values
    cout<<classObj.rollNo<<endl;
    cout<<classObj.studentName<<endl;

    //accessing member functions of the class
    classObj.printWelcome();
    classObj.rollNoNotify();

}