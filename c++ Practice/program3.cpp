// #3 Take 'n' numbers in array and add it -> for loop
#include <iostream>
using namespace std;
int main()
{
    int a[20],n,i,sum=0;
    cout<<"Enter number of elements you want in array: ";
    cin>>n;
    cout<<"Enter array:"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];  // sum = sum + a[i]
    }
    cout<<"The sum of all elements of array is: "<<sum<<endl;
    return 0;
}