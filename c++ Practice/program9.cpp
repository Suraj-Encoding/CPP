// #9  Transpose of matrix
#include <iostream>
#define N 20 // Macros
using namespace std;

int main()
{
    int a[N][N],b[N][N];
    int i,j,m,n;
    cout<<"\n # Matrix Transpose # \n"<<endl;
    cout<<"Enter rows and columns of matrix: "<<endl;
    cin>>m>>n;
    cout<<"Enter the matrix: "<<endl;
    for(i=0;i<m;i++)
    {
      for(j=0;j<n;j++)
        {
           cin>>a[i][j]; 
        }
    }
   
    cout<<"\nEntered matrix is: "<<endl;
    for(i=0;i<m;i++)
    {
      for(j=0;j<n;j++)
        {
           cout<<a[i][j]<<" "; 
        }
        cout<<endl;
    }
   
   cout<<"\nTranspose of matrix is: "<<endl;
   for(i=0;i<m;i++)
    {
      for(j=0;j<n;j++)
        { 
           cout<<a[j][i]<<" "; 
        }
        cout<<endl;
    }
    return 0;
}