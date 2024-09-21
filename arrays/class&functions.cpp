// class and functions
#include <iostream>
using namespace std;

class Rectangle{
    private:
    int length;
    int breadth;

public:

Rectangle(int l,int b){
    length=l;
    breadth=b;
}

int area(){
    return length*breadth;
}

void changeLength(int l){
    length=l;
}

};

int main()
{
    int a,b;
    Rectangle r(10,5);
    a=r.area();
    r.changeLength(20);
    b=r.area();
    cout<<a<<" "<<b;

    return 0;
}
