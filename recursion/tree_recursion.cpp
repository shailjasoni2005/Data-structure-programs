// Time complexity :- O(2^n) , space complexity depends on the height of the tree, so space complexity is O(n).
// In tree recursion, a function makes more than one recursive call during its execution, resulting in a "tree-like" structure of recursive calls. Each call can branch into further recursive calls, forming multiple paths of execution.

#include<bits/stdc++.h>
using namespace std;

void fun(int n){
    if(n>0){
        cout<<n<<" ";
        fun(n-1);
        fun(n-1);
    }
}

int main(){
    fun(3);
    return 0;
}