// #11 Copy Constructor + Destructor
#include <iostream>
using namespace std;

// class
class Point {
    private:
      int x,y;
    public:
      // Default constructor -> Must
      Point(){ 
        cout<<"\nDefault Constructor.."<<endl;
        x=0;
        y=0;
      }
      // Parameterised constructor
      Point(int x1, int y1){
        cout<<"\nParameterised Constructor.."<<endl;
        x=x1;
        y=y1;
      }
      // Copy constructor
      Point(const Point& O){  // 'const' is optional -> & indicates that we pass address here.
        cout<<"\nCopy Constructor.."<<endl;
        x=O.x;
        y=O.y;
        cout<<"x is: "<<x<<endl;
        cout<<"y is: "<<y<<endl<<endl;
      }
      // Destructor
      ~Point(){
        cout<<"Destructor..."<<endl;
      }
      // Functions
      int getx(){ return x;};
      int gety(){ return y;};
      void read(){
        cout<<"\nEnter x: ";
        cin>>x;
        cout<<"Enter y: ";
        cin>>y;
      }
};

// main function
int main()
{   
    // # D.C 
    Point p1;
    cout<<"x is: "<<p1.getx()<<endl;
    cout<<"y is: "<<p1.gety()<<endl;

    // # P.C
    Point p2(3,4);
    cout<<"x is: "<<p2.getx()<<endl;
    cout<<"y is: "<<p2.gety()<<endl;
    
    // # Trial
    Point p3(5,10);
    cout<<"x is: "<<p3.getx()<<endl;
    cout<<"y is: "<<p3.gety()<<endl;
    p3.read();
    cout<<"x is: "<<p3.getx()<<endl;
    cout<<"y is: "<<p3.gety()<<endl;

    // # C.C
    Point p4(p3);
    
    // # Destructor is call now...
    return 0;
}

/*
Note:  If I declare and define explicitly one or more constructor 
       in my program then I must have to define one default constructor 
       explicitly then.
*/