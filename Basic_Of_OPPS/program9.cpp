// #9 Inline functions
#include <iostream>
using namespace std;

// Inline function
inline int product(int a, int b){
    // static variables
    static int c=0;
    c = c+1;
    return (a*b) + c;

}

int main()
{
    int a,b;
    cout<<"Enter the two numbers a and b: "<<endl;
    cin>>a>>b;
    cout<<"The product of a and b is: "<< product(a,b) <<endl; 
    cout<<"The product of a and b is: "<< product(a,b) <<endl; 
    cout<<"The product of a and b is: "<< product(a,b) <<endl; 
    return 0;
}