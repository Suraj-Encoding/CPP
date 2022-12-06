// #10 Constructor
#include <iostream>
using namespace std;

// class
class Bank{
    private:
      long long amt;
      int rollno;
      string name,dept;
    public:
       // Constructor daclaration
       Bank(); // D.C
       Bank(string dep); // P.C
       Bank(long long am, string dep); // P.C With D.A
       
    // setdata
    void read(){
        cout<<"\nEnter data: "<<endl;
        cout<<"Name: ";
        cin>>name;
        cout<<"Department: ";
        cin>>dept;
        cout<<"Roll No: ";
        cin>>rollno;
        cout<<"Amount: ";
        cin>>amt;
        cout<<endl;
    }
    
    // getdata
    void display(){
        cout<<"Data is: "<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Department: "<<dept<<endl;
        cout<<"Roll No: "<<rollno<<endl;
        cout<<"Amount: "<<amt<<endl;
    }

};

    // Default constructor
    Bank :: Bank(){
          cout<<"\nDefault Constructor..."<<endl;
          dept="null";
          amt=0;
          rollno=0;
          name="null";
       }

    // Parameterised constructor
    Bank :: Bank(string dept){
         cout<<"\nParameterised Constructor..."<<endl;
         this -> dept=dept;  // use of 'this' keyword
         amt=1;
         rollno=1;
         name="Suraj";
       }

    // Parameterised constructor with default arguments
    Bank :: Bank(long long amt, string dept){
         cout<<"\nParameterised Constructor With defalut arguments..."<<endl; 
         this -> dept=dept;
         this -> amt=amt;
         rollno=2;
         name="Raj";
       }

// main function
int main()
{  
    
    // # D.C
    Bank c1;
    c1.display();
    
    // # P.C
    Bank c2("pcmc");
    c2.display();

    // # P.C With D.A
    Bank c3(200,"Pimpri");
    c3.display();
    
    // # Read and Display
    Bank c4;
    cout<<"Read and display data";
    c4.read();
    c4.display();
    cout<<"Destructor is call now..\n"<<endl;
    return 0;
}