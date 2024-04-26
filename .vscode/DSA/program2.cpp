#include <iostream>
using namespace std;

void fun(int* A)
{
    for(int a:A)                    //we cannot use for each loop on pointer.
    {
        cout<<a<<" "<<endl;
    }
    // cout<<sizeof(A)/sizeof(int)<<endl;
}

int main()
{
    int A[]={1,2,3,4,5};
    int n=5;
    
    fun(A);
    for(int x:A)
    {
        cout<<x<<" ";
    }
    
    

    return 0;
}
