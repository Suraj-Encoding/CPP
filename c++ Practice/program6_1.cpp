// #6 Calculator -> Using Functions and If-else
#include <iostream>
using namespace std;

void calc(int a, int b, int ch)
{
    if(ch==1)
      cout<<"Addition of "<<a<<" and "<<b<<" is: "<<(a+b)<<endl;
    else if(ch==2)
      cout<<"Subtraction of "<<a<<" and "<<b<<" is: "<<(a-b)<<endl;
    else if(ch==3)
      cout<<"Multiplication of "<<a<<" and "<<b<<" is: "<<(a*b)<<endl;
    else
      cout<<"Division of "<<a<<" and "<<b<<" is: "<<(a/b)<<endl;

}

int main()
{
    int a,b,ch;
    cout<<"*** Simple Calculator ***"<<endl;
    cout<<" Menu: \n1.Addition \n2.Subtraction \n3.Multiplication \n4.Division \nEnter your choice: ";
    cin>>ch;
    if(ch<=0 || ch>=5)
    {
        cout<<"Enter correct choice!"<<endl;
        return 0;  // No need of else
    }
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;
    calc(a,b,ch);
    return 0;
}