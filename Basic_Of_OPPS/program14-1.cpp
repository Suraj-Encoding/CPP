// #14 Friend Class -> (Part-1)
#include <iostream>
using namespace std;

// class 
class A{
    private:
       int x;
    public:
       // constrcutor
       A(){
         x=10;
       }
       // friend class
       friend class B;
};

// friend class 
class B{
    private:
       int y;
    public:
      // member function
      void display(A o)
      {
        cout<<"The value of x is : "<<o.x<<endl;  // o.x = a.x
      }
};


// main function
int main()
{ 
    A a; // default constrcutor of A is call
    B b;
    b.display(a);
    return 0;
}