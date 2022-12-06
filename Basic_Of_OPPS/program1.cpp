// #1 Basics of Classes and Objects 
#include <iostream>
using namespace std;

// class
class Employee {
    private:
       int x,y,z;
    public:
       int a,b,c;
    void setdata(int x1, int y1, int z1);  // only declared
    void getdata(){   // directly defined
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
        cout<<"The value of c is "<<c<<endl;
        cout<<"The value of x is "<<x<<endl;
        cout<<"The value of y is "<<y<<endl;
        cout<<"The value of z is "<<z<<endl;
    }
     
};

// Defination of function of any class
void Employee :: setdata(int x1, int y1, int z1){
    x = x1;
    y = y1;
    z = z1;
}

// main function
int main()
{  
    Employee obj;  // 'obj' is an object of class 'Employee'
    obj.a = 1;
    obj.b = 2;  
    obj.c = 3;
   //  obj.x = 4; --> This will throw an error as x is private
    obj.setdata(4,5,6);
    obj.getdata();
    return 0;
}