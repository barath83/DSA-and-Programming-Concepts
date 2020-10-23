/*
Modes of Inheritance 

- Public mode
- Protected mode
- Private mode

*/

class A 
{
    public:
        int x;
    protected:
        int y;
    private:
        int z;        
}

class B : public A {

    // x is public
    // y is protected
    // z is not accessible from B as it's a private member in class A
    
};

class C : protected A {

    // x is protected
    // y is protected
    // z is not accesible from C as it's a private member in class A

};

class D : private A {

    // x is private
    // y is private
    // z is not accessible from D as it's a private member in class A

};