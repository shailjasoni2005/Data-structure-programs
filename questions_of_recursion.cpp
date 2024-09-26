#include<bits/stdc++.h>
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

int main(){
    // cout<<sum(10)<<endl;
    // cout<<fact(5)<<endl;
    // cout<<pow(2,5)<<endl;
    // cout<<e(2,5)<<endl;
    cout<<e1(2,5)<<endl;

    return 0;
}