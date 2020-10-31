/*
Operator overloading 
    '+' operator when placed between two string concatenates them and when placed between two two intgers adds them
    We can make operator to work for user defined classes,to provide the operators special meaning for a data type
    For operator overloading to work atleast one of the operands must be a user defined class object
 Syntax : 
    return_type operator operatorSymbol(op to be overloaded)(argumentType reference)
*/

#include<bits/stdc++.h>
using namespace std;

class Complex {
    private:
        int real,img;
    public:
        //default constructor is used for c3 as we do not pass arguments to initialize for c3
        Complex(){
            real = 0;
            img = 0;
        }
        //used when arguments are passed in case of c1 and c2
        Complex(int r,int i){
            real = r;
            img = i;
        }    

        //here '+' is overloaded to add two objects
        //receives an object on which the operator is overloaded
        Complex operator +(Complex c){
            Complex temp;
            //here temp.real and temp.img is used as temp space to store value to return 
            //real holds the value of first object and c.real holds the value of second object
            //the same goes img
            temp.real = real+c.real;
            temp.img = img+c.img;

            return temp;
        }
    //prints output
    void print(){
        cout<<"The complex number is";
        cout<<real<<" + i"<<img<<endl;
    }    
};


int main()
{
    Complex c1(10,5);
    Complex c2(2,4);

    Complex c3;
    c3 = c1+c2; //the compiler will read it as c1.add(C2)
    //we are passing the c2 to the operator to be overloaded to add with c1

    c3.print();
}



/*
    Operators that cannot be overloaded
        . dot operator
        :: scope resolution
        ?: ternary
        sizeof sizeof()
*/