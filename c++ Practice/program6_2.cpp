// #6 Calculator -> Using Functions and Switch Cases, while and do-while loop for menu driven:
#include <iostream>
using namespace std;

void add(int a, int b){
    cout<<"Addition of "<<a<<" and "<<b<<" is: "<<(a+b)<<endl;
}

void sub(int a, int b){
    cout<<"Subtraction of "<<a<<" and "<<b<<" is: "<<(a-b)<<endl;
}

void multi(int a, int b){
    cout<<"Multiplication of "<<a<<" and "<<b<<" is: "<<(a*b)<<endl;
}

void division(int a, int b){
    cout<<"Division of "<<a<<" and "<<b<<" is: "<<(a/b)<<endl;
}


int main()
{
    int a,b,ch;
    // do{
    while(1){
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
    switch (ch)
    {
    case 1:
        add(a,b);
        break;
    
    case 2:
        sub(a,b);
        break;
    
    case 3:
        multi(a,b);
        break;
    
    case 4:
        division(a,b);
        break;
    
    default:
        break;
    }
    // }while(1); // If enter wrong choice it automatically comes out of the loop
}
    return 0;
}