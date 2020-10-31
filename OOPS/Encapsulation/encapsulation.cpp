/*
Encapsulation means that sensitive data is hidden from the users.
In OOPS it is defined as binding the data and the function that manipulates them.
Encapsulation leads to data hiding or abstraction,as it hides private or sensitive data from other parts of the program.
The data members should be in private mode and the member functions should be in public mode.
To modify or read the data of private member we have to use get and set methods define in public mode.
*/

#include<bits/stdc++.h>
using namespace std;


class Employee{
    //data member which is to be hidden should be in private mode
    //i.e salary here
    private:
        int salary;
    //methods that manipulate or view the data should be in public 
    //i.e get and setSalary     
    public:
        void setSalary(int s){
            salary = s;
        }

        int getSalary(){
            return salary;
        }
};

int main()
{
    Employee empObj;

    //set method to set the salary with a value passed as argument
    empObj.setSalary(10000);
    //get method returns the salary value 
    cout<<"The salary is "<<empObj.getSalary()<<endl;
}

/*
Advantages 
- Good practice to declare the class attributes as private, encapsulation offers better control of data
- Can change one part of code without affecting others
- Increased security of data
*/