// #3 Student Data
#include <iostream>
using namespace std;

// class
class Student{
   private:
     int roll_no;
     char name[50], address[50], Class[50];
     char div;
     long int phone_no;
    public:
     // function declaration
     void read();
     void display();
};

// function defination
void Student :: read(){
      cout<<"Enter student data: "<<endl;
      cout<<"Enter name: ";
      gets(name);
      cout<<"Enter address: ";
      gets(address);
      cout<<"Enter class: ";
      gets(Class);
      cout<<"Enter division: ";
      cin>>div;
      cout<<"Enter roll no: ";
      cin>>roll_no;
      cout<<"Enter phone no: ";
      cin>>phone_no;
}

void Student :: display(){
    cout<<"\nEntered student data is: "<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Address: "<<address<<endl;
    cout<<"Class: "<<Class<<endl;
    cout<<"Division: "<<div<<endl;
    cout<<"Roll No: "<<roll_no<<endl;
    cout<<"Phone No: "<<phone_no<<endl;
}

// main function
int main()
{  
    cout<<"\n # Student Data # \n"<<endl;
    Student suraj;
    suraj.read();
    suraj.display();
    return 0;
}