//converting this class into a template class

// #include<iostream>
// using namespace std;
// class Arithmetic{
//     private:
//     int a;
//     int b;
//     public:
//     Arithmetic(int x,int y);
//     int add();
//     int sub();
// };

// Arithmetic::Arithmetic(int x,int y)
//     {
//         a=x;
//         b=y;
//     }

//     int Arithmetic::add(){
//         int c;
//         c=a+b;
//         return c;
//     }

//     int Arithmetic::sub(){
//         int c;
//         c=a-b;
//         return c;
//     }


// int main(){
//     Arithmetic ar(10,5);
//     cout<<ar.add()<<endl;
//     cout<<ar.sub();
//     return 0;
// }

//Template class

#include<iostream>
using namespace std;

template<class T>

class Arithmetic{
    private:
    T a;
    T b;
    public:
    Arithmetic(T x,T y);
    T add();
    T sub();
};

//The scope of above template has ended here 

template<class T>

Arithmetic<T>::Arithmetic(T x,T y)
    {
        a=x;
        b=y;
    }

    template<class T>
    T Arithmetic<T>::add(){
        T c;
        c=a+b;
        return c;
    }

    template<class T>
    T Arithmetic<T>::sub(){
        T c;
        c=a-b;
        return c;
    }


int main(){
    Arithmetic<float> ar(10.99,5.7);
    cout<<ar.add()<<endl;
    cout<<ar.sub();
    return 0;
}
