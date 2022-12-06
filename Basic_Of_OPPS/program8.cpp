// #8 Menu driven program with two classes circle and rectangle
#include <iostream>
#define pi 3.14
using namespace std;

class circle{ 
   private: 
     int r;
     float area,p;
   public:
    void read(){
        cout<<"Enter radius: ";
        cin>>r;
    }
    void Area(){
       area = pi*r*r;
       cout<<"Area of circle is: "<<area<<endl;
    }
    void perimeter(){
        // perimeter of a circle is nothing but circumference
        p = 2*pi*r;
        cout<<"Perimeter of circle is: "<<p<<endl;
    }
};

class rectangle{
    private:
      int l,b;
      float area,p;
    public:
    void read(){
        cout<<"Enter length: ";
        cin>>l;
        cout<<"Enter breadth: ";
        cin>>b;
    }
    void Area(){
       area = l*b;
       cout<<"Area of rectangle is: "<<area<<endl;
    }
    void perimeter(){
        p = 2*(l+b);
        cout<<"Perimeter of rectangle is: "<<p<<endl;
    }
};

int main()
{
    
    circle c;
    rectangle r;
    int ch;
    // menu driven
    do{
    cout<<"\n # Maths # \n";
    cout<<"\nMenu \n1.Circle \n2.Rectangle \n0.Exit \nEnter your choice: ";
    cin>>ch;
    // switch case
    switch(ch){

        case 1:
           cout<<"\n # Circle #"<<endl;
           c.read();
           c.Area();
           c.perimeter();
           break;
           
        case 2: 
           cout<<"\n # Rectangle #"<<endl;
           r.read();
           r.Area();
           r.perimeter();
           break;

        case 0:
           exit(0);
           break;

        default:
           cout<<"Wrong choice!"<<endl;
           break;
    }
 }while(1);
    return 0;
}