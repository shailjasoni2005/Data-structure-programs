//Array as parameter

#include <iostream>
using namespace std;

void fun(int A[],int n)
{
    A[0]=25;
    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }
}

int main()
{
    int A[5]={1,2,3,4,5};
    fun(A,5);

    return 0;
}
