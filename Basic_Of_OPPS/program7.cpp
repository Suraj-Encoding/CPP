// #7 Bank Account Details -> Using array of objects
#include <iostream>
using namespace std;

// class
class Bank{ 
   private:
     long int acc_no;
     long int amount;
     string name, acc_name, branch_name;
    public:
     // function declaration
     void read(int i);
     void display(int i);
};

// function defination
void Bank :: read(int i){
      cout<<"\nEnter data of customer-"<<(i+1)<< ": "<<endl;
      cin.ignore();  // <- Imp step
      cout<<"Enter customer name: ";
      getline(cin,name);  // ! changed 
      // cin>>name;
      cout<<"Enter account name: ";
      getline(cin,acc_name);   // ! changed
      // cin>>acc_name;
      cout<<"Enter branch name: ";
      getline(cin,branch_name);   // ! changed
      // cin>>branch_name;
      cout<<"Enter account no: ";
      cin>>acc_no;
      cout<<"Enter amount: ";
      cin>>amount;
}

void Bank :: display(int i){
    cout<<"\nCustomer-" <<(i+1)<< " Details: "<<endl;
    cout<<"Customer Name: "<<name<<endl;
    cout<<"Account Name: "<<acc_name<<endl;
    cout<<"Branch Name: "<<branch_name<<endl;
    cout<<"Account No: "<<acc_no<<endl;
    cout<<"Amount: "<<amount<<endl;
}

// main function
int main()
{  
    cout<<"\n # Bank Account Details # \n"<<endl;
    Bank customer[20];
    int i,n;
    cout<<"Enter number of Customers: ";
    cin>>n;
    // setdata
    for(i=0;i<n;i++)
    {
        customer[i].read(i);
    }
    // getdata
    for(i=0;i<n;i++)
    {
        customer[i].display(i);
    }
    return 0;
}