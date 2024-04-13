//Modular program
// #include<iostream>
// using namespace std;

// int area(int length,int breadth)
// {
//     return length*breadth;
// }
// int perimeter(int length,int breadth)
// {
//     int p=2*(length+breadth);
//     return p;
// }

// int main(){
//     int length=0;
//     int breadth=0;
//     cin>>length>>breadth;
//     int a=area(length,breadth);
//     int peri=perimeter(length,breadth);
//     cout<<a<<" "<<peri<<endl;

// }

//structure and functions

// #include<iostream>
// #include<stdio.h>
// using namespace std;

// struct Rectangle
// {
//     int length;
//     int breadth;
// };

// void initialise(struct Rectangle *r,int l,int b){
//     r->length=l;
//     r->breadth=b;
// }


// int area(Rectangle r)
// {
//     return r.length*r.breadth;
// }
// int perimeter(Rectangle r)
// {
//     int p=2*(r.length+r.breadth);
//     return p;
// }

// int main(){
//     Rectangle r={0,0};
//     // cin>>r.length>>r.breadth;
//     int l,b;
//     cin>>l>>b;
//     initialise(&r,l,b);

//     int a=area(r);
//     int peri=perimeter(r);
//     cout<<a<<" "<<peri<<endl;

// }

//changing above program into class

#include<iostream>
#include<stdio.h>
using namespace std;

// struct Rectangle
class Rectangle
{
    private:
    int length;
    int breadth;

    public:

void initialise(int l,int b){
    length=l;
    breadth=b;
}


int area()
{
    return length*breadth;
}
int perimeter()
{
    int p=2*(length+breadth);
    return p;
}
};

int main(){
    Rectangle r;
    // cin>>r.length>>r.breadth;
    int l,b;
    cin>>l>>b;
    r.initialise(l,b);

    int a=r.area();
    int peri=r.perimeter();
    cout<<a<<" "<<peri<<endl;

}