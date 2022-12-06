// #1 Basic Program for Inheritance -> (Part-2)
// # Public Inherite
#include <iostream>
using namespace std;

// Base class
class Person{
    private:
       int id;
       char name[100];
    public:
       void set_p();
       void display_p();
};

// Functions defination
void Person :: set_p(){
    cout<<"\nEnter Person Data: "<<endl;
    cout<<"Enter the Id: ";
    cin>>id;
    cout<<"Enter the name: ";
    cin>>name; 
}

void Person ::display_p(){
    cout<<endl<<"Id"<<"\t"<<"Name"<<endl;
    cout<<""<<id<<"\t"<<name<<endl;
}

// Derived class
class Employee : public Person{
    private:
       char dep[50];
       int salary;
    public:
       void set_s(){
            cout<<"\nEnter Employee Data: "<<endl;
            cout<<"Enter the department: ";
            cin>>dep;
            cout<<"Enter the salary: ";
            cin>>salary;
       }

       void display_s(){
             cout<<endl<<"Dept"<<"\t"<<"Salary"<<endl;
             cout<<""<<dep<<"\t"<<salary<<endl<<endl;
       }

};

// main function
int main()
{
    Employee em;
    em.set_p();
    em.set_s();
    em.display_p();
    em.display_s();
    return 0;
}