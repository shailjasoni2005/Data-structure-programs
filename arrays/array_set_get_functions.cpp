/* Get means we want to know an element at a particular index.      ----> Get method is for reading the value.
Set :- this method is used for replacing value at a particular index .      ----->Set method is for writing the value.
Max :- this method is used for finding maximum element from array.      ------> O(n).
Min :- this method is used for finding minimum element from array.      ------> O(n).
Sum :- this method is used for finding sum of all elements.     -----> O(n).

Recursive method for finding sum of elements in an array is also shown below.

average :- used for finding average of array elements.
*/ 

#include <bits/stdc++.h>
using namespace std;

// struct Array
// {
//     int A[10];
//     int size;
//     int length;
// };

// void Display(struct Array arr){
//     for(int i=0;i<arr.length;i++){
//         cout<<arr.A[i]<<" ";
//     }
// }

// int Get(struct Array arr,int index){
//     if(index>=0 && index<arr.length){
//         return arr.A[index];
//     }
//     return -1;
// }

// void Set(struct Array *arr,int index,int x){
//     if(index>=0 && index<arr->length){
//         arr->A[index]=x;
//     }
// }

// int Max(struct Array arr){
//     int max=arr.A[0];
//     int i;
//     for(i=1;i<arr.length;i++){
//         if(arr.A[i]>max){
//             max=arr.A[i];
//         }
//     }
//     return max;
// }
// int Min(struct Array arr){
//     int min=arr.A[0];
//     int i;
//     for(i=1;i<arr.length;i++){
//         if(arr.A[i]<min){
//             min=arr.A[i];
//         }
//     }
//     return min;
// }

// int Sum(struct Array arr){
//     int s=0;
//     int i;
//     for(i=0;i<arr.length;i++){
//         s=s+arr.A[i];
//     }
//     return s;
// }

// float Average(struct Array arr){
//     return (float)Sum(arr)/arr.length;
// }

// int main(){
//     struct Array arr = {{2,3,14,0,6},10,5};
//     // cout<<Get(arr,9)<<endl;
//     // Set(&arr,0,15);
//     // cout<<Max(arr)<<endl;
//     // cout<<Min(arr)<<endl;
//     // cout<<Sum(arr)<<endl;
//     cout<<Average(arr)<<endl;
//     Display(arr);

// }

class Array
{
private:
    int A[10];
    int size;
    int length;
public:
    Array(int arr[],int s,int l){
        size=s;
        length=l;
        for(int i=0;i<length;i++){
            A[i]=arr[i];
        }
    }
    
    void Display() const{
        for(int i=0;i<length;i++){
            cout<<A[i]<<" ";
        }
        cout<<endl;
    }

    int Get(int index){
        if(index>=0 && index<length){
            return A[index];
        }
        return -1;
    }

    void Set(int index,int x){
        if(index>=0 && index<length){
            A[index] = x;
        }
    }

    int Max() const{
        int max=A[0];
        for(int i=1;i<length;i++){
            if(A[i]>max){
                max=A[i];
            }
        }
        return max;
    }

    int Min() const{
        int min=A[0];
        for(int i=1;i<length;i++){
            if(A[i]<min){
                min=A[i];
            }
        }
        return min;
    }

    int Sum() const{
        int sum=0;
        for(int i=0;i<length;i++){
            sum=sum+A[i];
        }
        return sum;
    }

    float Average() const{
        return static_cast<float>(Sum()) / length;
    }

};

int main(){
    int arr[]={2,3,4,5,6};
    Array array(arr,5,5);

    // cout<<array.Get(2)<<endl;
    // array.Set(3,15);
    // cout<<array.Max()<<endl;
    // cout<<array.Min()<<endl;
    // cout<<array.Sum()<<endl;
    cout<<array.Average()<<endl;
    array.Display();


    return 0;
}