// #4 factorial of a number
#include <iostream>
using namespace std;

int factorial(int n)
{
   if(n==0)
      return 1;
   else
     return n*factorial(n-1);
}

int main()
{
    int n,fact;
    cout<<"Enter the number: ";
    cin>>n;
    if(n<0){
        cout<<"The factorial of a negative number does not exist!"<<endl;
    }
    else{
    fact = factorial(n);
    cout<<"The factorial of "<<n<< " is: "<<fact<<endl;
    }
    return 0;
}