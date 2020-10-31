/* Constructors

A constructor is s special method that is automatically called when the object of a class is created.
Constructors have the same name as the class and may be defined inside or outside the class definition.
There are 3 types of Constructor
- Default 
- Parameterized
- Copy
*/

#include<bits/stdc++.h>
using namespace std;

class myClass{
    public:
        int id;
        int num1,num2;

    //constructor name should be same as class name 
    //default constructor with no parameters
    myClass(){
        cout<<"This is a default constructor called when a object is created"<<endl;
        id = -1;
    }

    //parameterized constructor with parameter passed as x and id will assigned for that object on which the parameterized constructor is called
    myClass(int x){
        cout<<"This is a parameterized constructor called when a object with parameter is created"<<endl;
        id = x;
    } 

    myClass(int a,int b);   
};

//constructor declared inside class but defined outside
//this constructor will be called when two parameters are passed for a object
myClass :: myClass(int a,int b)
{
    num1 = a;
    num2 = b;
}

int main()
{
    //as soon as object is created constructor will be called 
    //since it's a constructor that has no argument passed it will be considered as a default one
    //and the first constructor without parameters will be called and default value will be -1
    myClass classOjb1;
    cout<<"Id value for default constructor should be -1, it is "<<classOjb1.id<<endl;

    //as soon as object is created constructor will be called 
    //since it's a constructor that has argument passed it will be considered as a parameterized one
    //and the second constructor wit parameters will be called and value will be whatever value passed as argument, 10 in this case
    myClass classOjb2(10);
    cout<<"Parameter constructor id should be the one that is passed from classObj2 "<<classOjb2.id<<endl;

    //since it's a constructor with two arguments the constructor which is defined outside the class will be called
    //as it is the one that matches with two parameters
    myClass classObj3(50,100);
    cout<<"The two numbers that are intialized using constructor that is declared inside but defined outside are "<<classObj3.num1<<" "<<classObj3.num2<<endl;
}
