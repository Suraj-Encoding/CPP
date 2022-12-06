// #2 Calculator using classes and objects
#include <iostream>
using namespace std;

// class
class calculator{
    int a,b,c;
    public:
      void read(){
        cout<<"\nEnter two numbers:"<<endl;
        cin>>a>>b;
      }
       void add(){
         c = a+b;
        cout<<"The sum of "<<a<< " and "<<b<< " is: "<<c<<endl;
      }
       void sub(){
         c = a-b;
        cout<<"The subtraction of "<<a<< " and "<<b<< " is: "<<c<<endl;
      }
       void product(){
         c = a*b;
        cout<<"The product of "<<a<< " and "<<b<< " is: "<<c<<endl;
      }
       void div(){
         c = a/b;
        cout<<"The division of "<<a<< " and "<<b<< " is: "<<c<<endl;
      }
  
};


// main function
int main()
{
    calculator cobj;
    cout<<"\n ## Calculator ## \n";

    cobj.read();
    cobj.add();

    cobj.read();
    cobj.sub();

    cobj.read();
    cobj.product();

    cobj.read();
    cobj.div();

    return 0;
}