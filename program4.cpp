// structure and functions 
#include <iostream>
using namespace std;

struct Rectangle{
    int length;
    int breadth;
};

void initialise(struct Rectangle *r,int l,int b){
    r->length=l;
    r->breadth=b;
}

int area(struct Rectangle r){
    return r.length*r.breadth;
}

void changeLength(struct Rectangle *r,int l){
    r->length=l;
}

int main()
{
    int a,b;
    struct Rectangle r;
    initialise(&r,10,5);
    a=area(r);
    changeLength(&r,20);
    b=area(r);
    cout<<a<<" "<<b;

    return 0;
}
