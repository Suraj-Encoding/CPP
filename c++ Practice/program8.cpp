// #8 Multiplication of two matrix
#include <iostream>
#define N 20 // Macros
using namespace std;
int main()
{
    int a[N][N],b[N][N],c[N][N];
    int i,j,k,p,q,r,s,sum;
    cout<<"\n # Matrix Multiplication # \n"<<endl;
    cout<<"Enter rows and columns of matrix-1: "<<endl;
    cin>>p>>q;
    cout<<"Enter matrix-1: "<<endl;
    for(i=0;i<p;i++)
    {
      for(j=0;j<q;j++)
        {
           cin>>a[i][j]; 
        }
    }
    cout<<"\nEnter rows and columns of matrix-2: "<<endl;
    cin>>r>>s;
    if( q!=r ){
        cout<<"You can't multiply! Enter the correct order"<<endl;
        exit(0);
    }
    cout<<"Enter matrix-2: "<<endl;
    for(i=0;i<r;i++)
    {
      for(j=0;j<s;j++)
        {
           cin>>b[i][j]; 
        }
    }

    cout<<"\nMatrix-1 is: "<<endl;
    for(i=0;i<p;i++)
    {
      for(j=0;j<q;j++)
        {
           cout<<a[i][j]<<" "; 
        }
        cout<<endl;
    }
    cout<<"\nMatrix-2 is: "<<endl;
    for(i=0;i<p;i++)
    {
      for(j=0;j<q;j++)
        {
           cout<<b[i][j]<<" "; 
        }
        cout<<endl;
    }
   cout<<"\nResultant matrix is: "<<endl;
     for(i=0;i<p;i++)
     {   
        for(j=0;j<r;j++)
        {   
             sum=0;
           for(k=0;k<q;k++)
           {
             sum=sum+(a[i][k]*b[k][j]); 
           } 
           c[i][j]=sum; 
           cout<<c[i][j]<<" ";
        }
        cout<<endl;
     }
    return 0;
}