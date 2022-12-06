// #15 [ Static variable + Static function ] in the class -> (Part-2)
#include <iostream>
using namespace std;

// class
class GFG{
    private:
        // static variable
        static int i;
        // non-static variable
        int j;
    public:
        // static function
        static void display(){
            cout<<"Hello "<<i<<endl;
            // j=5; -> you can't use normal (non static) varibles in static function
        }
        // destructor
        ~GFG(){
            cout<<"Destroyed.."<<endl;
        }
};

// Initialise static variable 
int GFG ::i=1;  // By default i=0

// main function
int main()
{   
    // Block-1
    { 
       GFG :: display();
       GFG obj;
       obj.display();
    } 
    // destructor call


    // life time of normal variable (object) -> throughout the block only
    cout<<"Inside main"<<endl;
    {
         GFG o;    // Block-2
    }
    // destructor call
    cout<<"End of main"<<endl;


    // life time of static variable (object) -> throughout the program
    cout<<"Inside main"<<endl;
    {
        static GFG o;    // Block-2
    }
    cout<<"End of main"<<endl;
    // destructor call
    return 0;
}