/*
Inheritance is the ability of a class to derive properties and characteristics from another class.

Sub class : The class that inherits properties from another class is called Sub class
Super class : The class whose properties are inherited by sub class is called Base class.
Types of inheritance
- Single inheritance
- Mutiple inheritance
- Multilevel inheritance
- Hybrid inheritance
- Hierarchial inheritance
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

/*
Multiple Inheritance is the ability of a class to inherit features from two bases classes
i.e one sub class inherits from two or more base classes
*/
//Here class Cow is the derived which inherits from two base classes Animal and Mammal
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

/*
Multilevel Inheritance is a type in which a class is derived from another class which itself is derived class
Base class -> class derived from base -> class derived from derived from derived class
*/

class A {
    public:
        A(){
            cout<<"This is the base class"<<endl;
        }
};

class B : public A{
    public:
        B(){
            cout<<"First derived class from base class A"<<endl;
        }
};

class C : public B{
    public:
        C(){
            cout<<"Second derived class C from derived class B"<<endl;
        }

};

/*
Hierarchial inheritance
In this inheritance a single base class will have one or more derived class and the same can follow 
for the derived sub-classes in a hierarchial fashion
*/

/*
Hybrid inheritance
It is obtained by combining more than one type of inheritance
*/


int main() 
{
    cout<<"Single Inheritance proved"<<endl;
    //when a object instance for Car is defined it will invoke the characteristics from it's base class
    //it calls the base constructor
    Car obj1;
    cout<<endl;

    //when a object instance for Cow is defined it will invoke the characteristics from both it's base classes
    //it calls the constructor in the both the classes in the order in which they are inherited
    cout<<"Multiple Inheritance proved"<<endl;
    Cow obj2;
    cout<<endl;

    //when a object instance for C is called it will invoke the constructors from the base class followed by derived classes in order
    //the order in which they are inherited will follow
    cout<<"Multilevel inheritance proved"<<endl;
    C obj3;
    cout<<endl;
}