/*
Inheritance is the ability of a class to derive properties and characteristics from another class.

Sub class : The class that inherits properties from another class is called Sub class
Super class : The class whose properties are inherited by sub class is called Base class.
Types of inheritance
- Single inheritance
*/

#include<bits/stdc++.h>
using namespace std;

/* Single Inheritance
n single inheritance, a class is allowed to inherit from only one class.
 i.e. one sub class is inherited by one base class only
*/
//Single Inheritance explained with class Vehicle which is base class
//and class Car which is derived from base class Vehicle
class Vehicle{
    public:
        Vehicle(){
            cout<<"This is a vehicle"<<endl;
        }
};

class Car : public Vehicle {

};

class Animal {
    public:
        Animal(){
            cout<<"This is a animal"<<endl;
        }
};

class Mammal {
    public:
        Mammal(){
            cout<<"This is a mammal"<<endl;
        }
};

class Cow : public Mammal, public Animal {

};


int main() 
{
    cout<<"Single Inheritance proved"<<endl;
    //when a object instance for Car is defined it will invoke the characteristics from it's base class
    //it calls the base constructor
    Car obj1;

    //when a object instance for Cow is defined it will invoke the characteristics from both it's base classes
    //it calls the constructor in the both the classes in the order in which they are inherited
    cout<<"Multiple Inheritance proved"<<endl;
    Cow obj2;
}