// #13 Friend function
#include <iostream>
using namespace std;

// class
class calculator{
    private:
       int a,b,sum,sub;
    public:
       // member functions
       void read();
       void display();
       void product();
       void div();
       // friend functions 
       // without arguments
       friend void Add(); 
       friend void Sub();
       // with arguments
       friend void add(calculator o);   
       friend void subtract(calculator o);

       // constructor
       calculator(){
         a=10;
         b=5;
       }

};

// member function defination

void calculator :: read(){
    cout<<"Enter two numbers: "<<endl;
    cin>>a>>b;
}

void calculator :: display(){
    sum = a+b;
    cout<<"The sum of "<<a<<" and "<<b<<" is: "<<sum<<endl;
}

void calculator :: product(){
     cout<<"The product of "<<a<<" and "<<b<<" is: "<<(a*b)<<endl;
}

void calculator :: div(){
     cout<<"The division of "<<a<<" and "<<b<<" is: "<<(a/b)<<endl;
}

// friend function defination

void Add(){
    calculator o;  // default constructor is call
    o.sum = o.a + o.b;
    cout<<"The sum is: "<<o.sum<<endl;
}

void Sub(){
    calculator o;  // default constructor is call
    o.sub = o.a - o.b;
    cout<<"The sub is: "<<o.sub<<endl;
}

void add(calculator o){
    o.sum = o.a + o.b;
    cout<<"The sum is: "<<o.sum<<endl;
}

void subtract(calculator o){
    o.sub = o.a - o.b;
    cout<<"The sub is: "<<o.sub<<endl;
}


// main function
int main()
{   
    calculator o;
    // member function call -> object is required
    o.read();
    o.display();
    o.product();
    o.div();
    // friend function call -> no object is required
    Add();
    Sub();
    add(o);
    subtract(o);
    return 0;
}

/*
Note: friend function is not a member function
      so to access the private variables of the 
      class object of that class is required in
      this friend function.
*/