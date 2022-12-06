// #6 Employee Data -> Using array of objects
#include <iostream>
using namespace std;

// class
class Employee{ 
   private:
     int id;
     string name, dept;
     long int salary;
    public:
     // function declaration
     void read(int i);
     void display(int i);
};

// function defination
void Employee :: read(int i){
      cout<<"\nEnter data of employee "<<(i+1)<< ": "<<endl;
      cin.ignore();  // <- Imp step
      cout<<"Enter Name: ";
      // cin>>name; // ! changed
      getline(cin,name);
      cout<<"Enter Department: ";
      // cin>>dept; // ! changed
      getline(cin,dept);
      cout<<"Enter ID: ";
      cin>>id;
      cout<<"Enter Salary: ";
      cin>>salary;
}

void Employee :: display(int i){
    cout<<"\nEmployee-" <<(i+1)<< " Data: "<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Department: "<<dept<<endl;
    cout<<"ID: "<<id<<endl;
    cout<<"Salary: "<<salary<<endl;
}

// main function
int main()
{  
    cout<<"\n # Employee Data # \n"<<endl;
    Employee em[20];
    int i,n;
    cout<<"Enter number of employee: ";
    cin>>n;
    // setdata
    for(i=0;i<n;i++)
    {
        em[i].read(i);
    }
    // getdata
    for(i=0;i<n;i++)
    {
        em[i].display(i);
    }
    return 0;
}