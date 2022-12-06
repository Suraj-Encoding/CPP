// #7 Addition of two matrix
#include <iostream>
#define N 20 // Macros
using namespace std;
int main()
{
    int a[N][N],b[N][N],c[N][N];
    int i,j,p,q,r,s;
    cout<<"\n # Matrix Addition # \n"<<endl;
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
    cout<<"Enter matrix-2: "<<endl;
    for(i=0;i<r;i++)
    {
      for(j=0;j<s;j++)
        {
           cin>>b[i][j]; 
        }
    }
    if( p!=r || q!=s ){
        cout<<"You can't add, Enter correct order!"<<endl;
        exit(0);
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
      for(j=0;j<q;j++)
        { 
           c[i][j]= a[i][j]+ b[i][j];
           cout<<c[i][j]<<" "; 
        }
        cout<<endl;
    }
    return 0;
}