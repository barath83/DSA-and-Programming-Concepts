/*
Access specifiers define how the members both attributes and methods of a class can be accessed.
There are three access specifiers in C++
 - public : members are accesible from outside the class
 - private : members cannot be accessed or viewed from outside the class 
 - protected : members cannot be accessed from outside the class, however they can be accessed in inherited classes
 - default access specifier is private
 */ 

#include<bits/stdc++.h>
using namespace std;

class MyClass {
  public:    // Public access specifier
    int x;   // Public attribute
    
  private:   // Private access specifier
    int y;   // Private attribute

  public:
    void update(int a){
        y = a;   
        cout<<"The private member y now has a value which is being passed from outside the class through a public method is "<<y<<endl;
    }  
};

int main() {

  MyClass myObj;
  myObj.x = 25;  // Allowed (public)
  //this is not allowed as we cannot directly access the data member which is private outside the class
  //myObj.y = 50;  // Not allowed (private)

  //to work around this we can have a public method inside class with which we can pass arguments and update the value to private member
  //so now by creating myOtherObj we can call the update method on it and pass the value that is going to update value to private member y
  MyClass myOtherObj;
  myOtherObj.update(50);

  return 0;
}