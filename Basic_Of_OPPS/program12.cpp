// #12 Static variables + Static functions
#include <iostream>
using namespace std;

int fun(){
    // read only once and after that ignore
    static int count=0;  // by default count=0 no need to specify explicitly
    count++;
    return count;
}


int main()
{
    cout<<"count = "<<fun()<<endl;
    cout<<"count = "<<fun()<<endl;
    return 0;
}

