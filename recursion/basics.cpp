// Head Recursion:- If the first statement inside a recursive function is function call then it is known as head recursion. 

// #include <stdio.h>
// using namespace std;
// void fun(int n)
// {
//  if(n>0)
//  {
//  fun(n-1);
//  printf("%d ",n);

//  }
// }
// int main() {
//  int x=3;

//  fun(x);
//  return 0;
// }

// Tail Recursion  :- when the recursive function call is the last step in recursive function then it is called tail recursion.
// tail recursion is more efficient if we uses loop . It's time complexity if O(n) and space complexity is O(n) if we don't use loop and O(1) while using loop.

#include <stdio.h>
void fun(int n)
{
 if(n>0)
 {
 printf("%d ",n);
 fun(n-1);

 }
}
int main() {
 int x=3;

 fun(x);
 return
0
;
}