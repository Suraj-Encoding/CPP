// #15 Static variable in class -> (Part-1)
#include <iostream>
using namespace std;

// class
class Number{
    private:
        // static int i;  // wrong 
    public:
        static int i;
        // constructor
        Number(){
            cout<<"Constructor.."<<endl;
        }
        ~Number(){
            cout<<"Destroyed.."<<endl;
        }

};

// static variable initialisation
int Number ::i=5;  // i=0

// main function
int main()
{   
    Number o1,o2;
    o1.i=1;
    o2.i=3;
    cout<<o1.i<<endl;
    cout<<o2.i<<endl;
    cout<< Number :: i <<endl;
    return 0;
}