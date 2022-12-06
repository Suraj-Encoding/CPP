// #1 Basic Program for Inheritance -> (Part-1)
// # Private Inherite
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
    cout<<"\nEnter Data: "<<endl;
    cout<<"Enter the Id: ";
    cin>>id;
    fflush(stdin); 
    // cin.ignore();  // OR
    cout<<"Enter the name: ";
    cin.get(name,100);  // New way
    // cin>>name;   // OR
}

void Person ::display_p(){
    cout<<endl<<"Id"<<"\t"<<"Name"<<endl;
    cout<<""<<id<<"\t"<<name<<endl;
}

// Derived class
class Student : private Person{
    private:
       char course[50];
       int fee;
    public:
       void set_s(){
            set_p();
            cout<<"Enter the course name: ";
            fflush(stdin);  // new way 
            // cin.ignore();  // OR
            cin.getline(course,50);
            cout<<"Enter the course fee: ";
            cin>>fee;
       }

       void display_s(){
             display_p();
             cout<<endl<<"Course"<<"\t"<<"Fee"<<endl;
             cout<<""<<course<<"\t"<<fee<<endl<<endl;
       }

};

// main function
int main()
{
    Student s;
    s.set_s();
    s.display_s();
    return 0;
}