// #5 Permutation(nPr) and combination (nCr)
#include <iostream>
using namespace std;

int fact(int n){
    if(n==0)
      return 1;
    else
      return n*fact(n-1);
}

int main()
{
    int n,r,p,c;
    cout<<"Enter value of n: ";
    cin>>n;
    cout<<"Enter value of r: ";
    cin>>r;
    if(n<0 || r<0 || n<r )
    {
        cout<<"Value of n and r never be negative. And n should always be greater than r."<<endl;
    }
    else{
    p = fact(n)/fact(n-r);
    c = fact(n)/(fact(r)*fact(n-r));
    cout<<"Permutation is: "<<p<<endl;
    cout<<"Combination is: "<<c<<endl;
    }
    return 0;
}