// #14 Friend class -> using one common friend function -> (Part-2)
#include <iostream>
using namespace std;

// forward declaration
class ABC;

// class
class XYZ{
    private:
       int x;
    public:
       // setdata
       void setdata(int a){  x=a; }
       // friend function -> common friend of both the classes
       friend void max(XYZ,ABC);
};

class ABC{
    private:
       int y;
    public:
       // setdata
       void setdata(int a){  y=a; }
       // friend function -> common friend of both the classes
       friend void max(XYZ,ABC);
};

// friend function
void max(XYZ t1, ABC t2)
{
    if(t1.x>t2.y)
      cout<<"x = "<<t1.x<<endl;
    else
      cout<<"y = "<<t2.y<<endl;
}



// main function
int main()
{
    ABC abc;
    XYZ xyz;
    xyz.setdata(20);
    abc.setdata(37);
    max(xyz,abc);
    return 0;
}