// #4 Calculator using classes and onjects with switch case
#include <iostream>
using namespace std;

// class
class calculator{
    int a,b,c;
    public:
      void read(){
        cout<<"Enter first number: ";
        cin>>a;
        cout<<"Enter second number: ";
        cin>>b;
      }
      void add(){
         c = a+b;
        cout<<"The addition of "<<a<< " and "<<b<< " is: "<<c<<endl;
      }
     void sub(){
         c = a-b;
        cout<<"The subtraction of "<<a<< " and "<<b<< " is: "<<c<<endl;
      }
     void product(){
         c = a*b;
        cout<<"The multiplication of "<<a<< " and "<<b<< " is: "<<c<<endl;
      }
     void div(){
         c = a/b;
        cout<<"The division of "<<a<< " and "<<b<< " is: "<<c<<endl;
      }
  
};


// main function
int main()
{   
    int ch;
    calculator obj;
    cout<<"\n ## FX991 ES Plus ## \n";
    // do-while loop for menu driven program
    do{
    cout<<"\nCalculator Menu: \n1.Addition \n2.Subtraction \n3.Multiplication \n4.Division \n0.Exit \nEnter your choice: ";
    cin>>ch;
    
    // Switch case
    switch(ch) {
    case 1:
      obj.read();
      obj.add();
      break;
    
    case 2:
      obj.read();
      obj.sub();
      break;
    
    case 3:
      obj.read();
      obj.product();
      break;

    case 4:
      obj.read();
      obj.div();
      break;
    
    case 0:
      exit(0);
      break;
     
    default:
      cout<<"Enter correct choice!"<<endl;
      break;
  }
}while(ch != 0);
    return 0;
}