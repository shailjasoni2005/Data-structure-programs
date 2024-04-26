// structure as parameter

#include <iostream>
using namespace std;

struct Rectangle{
    int length;
    int breadth;
};

struct Rectangle *fun()
{
    struct Rectangle *p;
    p= new Rectangle;

    p->length=15;
    p->breadth=8;
    return p;
};


int main()
{
    // struct Rectangle r1{10,5};
    // cout<<r1.length<<" "<<r1.breadth<<endl;
    // struct Rectangle *P=&r1;
    // cout<<(*P).length<<" "<<(*P).breadth;

    struct Rectangle *ptr=fun();
    cout<<ptr->length<<endl<<ptr->breadth<<endl;    

    return 0;
}
