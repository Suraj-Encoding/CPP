// #5 Array of Objects -> Student Data
#include <iostream>
#define max 30  // Macros
using namespace std;

// class
class Student{ 
   private:
     int roll_no;
     string name, address, Class;
    // -> If you want to use 'cin' or 'gets' fun then
    //  char name[max], address[max], Class[max];  
     char div;
     long int phone_no; 
    public:
     // function declaration
     void read(int i);
     void display(int i);
};

// function defination
void Student :: read(int i){
      cout<<"\nEnter data of student-"<<(i+1)<< " : "<<endl;

      cin.ignore(); // <- Imp step
      cout<<"Enter name: ";
      getline(cin,name); 
    
      cout<<"Enter address: ";
      getline(cin,address); 

      cout<<"Enter class: ";
      getline(cin,Class);

      cout<<"Enter division: ";
      cin>>div;

      cout<<"Enter roll no: ";
      cin>>roll_no;

      cout<<"Enter phone no: ";
      cin>>phone_no;
}

void Student :: display(int i){
    cout<<"\nStudent-" <<(i+1)<< " Data: "<<endl;
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
    Student stud[max]; 
    int i,n;
    cout<<"Enter number of students: ";
    cin>>n;
    // setdata
    for(i=0;i<n;i++)
    {
        stud[i].read(i);
    }
    //getdata
    for(i=0;i<n;i++)
    {
        stud[i].display(i);
    }
    return 0;
}