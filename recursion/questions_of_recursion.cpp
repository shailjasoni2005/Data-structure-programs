#include<bits/stdc++.h>
#include<iostream>
using namespace std;

// sum of first n natural numbers :---
int sum(int n){
    if(n==0){
        return 0;
    }
    else{
        return sum(n-1)+n;
    }
}

// factorial of a number:-
int fact(int n){
    if(n==0){
        return 1;
    }
    else{
        return fact(n-1)*n;
    }
}

// Power of a number using recursion:-

int pow(int m,int n){
    if(n==0){
        return 1;
    }
    else{
        return pow(m,n-1)*m;
    }
}
int pow2(int m,int n){
    if(n==0){
        return 1;
    }
    if(n%2==0){
        return (m*m,n/2);
    }
    else{
        return m*pow(m*m,(n-1)/2);
    }
}

// Taylor's series using recursion:-
// In taylor's series method a function should perform three operation(sum,fact,power) but should return one value.Since we need to use multiple values in this recursion we should use static variable.
int e(int x,int n){
    static int p=1,f=1;
    int r;
    if(n==0){
        return 1;
    }
    else{
        r=e(x,n-1);
        p=p*x;
        f=f*n;
        return (r+p/f);
    }
}

// Reduced version of taylor series using recursion:-
int e1(int x,int n){
    static int s=1;
    if(n==0){
        return s;
    }
    s=1+((x/n)*s);
    return e(x,n-1);
}

// fibonacci series

int fib(int n){   //O(n)-time complexity
    int t0=0,t1=1,s,i;
    if(n<=1){
        return n;
    }
    for(i=2;i<n;i++){
        s=t0+t1;
        t0=t1;
        t1=s;
    }
    return s;
}
    
int fib2(int n){   //Time complexity-O(2^n).
    if(n<=1){
        return n;
    }
    return fib2(n-2)+fib2(n-1);
}

// To print series as well:-O(n)-TC.
// This approach is called memoization.
static int F[100];

void initialize() {
    for (int i = 0; i < 100; i++) {
        F[i] = -1;
    }
}

int fib3(int n){
    if(n<=1){
        F[n]=n;
        return n;
    }
    else{
        if(F[n-2]==-1){
            F[n-2]=fib3(n-2);
        }
        if(F[n-1]==-1){
            F[n-1]=fib3(n-1);
        }
        return F[n-2]+F[n-1];
    }
}

//calculating combination using formula :- 

int c(int n,int r){
    int t1,t2,t3;
    t1=fact(n);
    t2=fact(r);
    t3=fact(n-r);
    return t1/(t2*t3);
}

// with pascal's triangle using recursion:-

int combination(int n,int r){
    if(r==0 || n==r){
        return 1;
    }
    else{
        return combination(n-1,r-1)+combination(n-1,r);
    }
    
}

// Tower of hanoi problem solved using recursion and TC == O(2^n);
void Toh(int n,int a,int b,int c){
    if(n>0){
        Toh(n-1,a,c,b);
        cout<<"From "<<a<<" To "<<c<<endl;
        Toh(n-1,b,a,c);
    }
}

int main(){
    // cout<<sum(10)<<endl;
    // cout<<fact(5)<<endl;
    // cout<<pow(2,5)<<endl;
    // cout<<e(2,5)<<endl;
    // cout<<e1(2,5)<<endl;
    // int n;
    // cin>>n;
    // cout<<fib(n)<<endl;
    // cout<<fib2(n)<<endl;
    //  initialize();
    // cout<<fib3(n)<<endl;
    // cout<<c(5,5);
    // cout<<combination(5,5);
    Toh(3,1,2,3);

    return 0;
}