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

    void Swap(int index1,int index2){
        int temp=A[index1];
        A[index1]=A[index2];
        A[index2]=temp;
    }

    void insert(int x){
        int i=length-1;
        if(size==length){
            return;
        }
        while (i>=0 && A[i]>x)
        {
            A[i+1]=A[i];
            i--;
        }
        A[i+1]=x;
        length++;
        
    }

    int IsSorted(){
        for(int i=0;i<length-1;i++){
            if(A[i]>A[i+1]){
                return 0;
            }
        }
        return 1;
    }

    void Rearrange(){
        int i,j;
        i=0;
        j=length-1;
        while (i<j)
        {
            while(A[i]<0){i++;}
            while(A[j]>0){j--;}
            if(i<j){swap(A[i],A[j]);}
        }
        
    }

};

int main(){
    int arr[]={2,-3,25,10,-15,-7};
    Array array(arr,10,5);

    array.insert(11);
    // cout<<array.IsSorted()<<endl;
    array.Rearrange();
    array.Display();


    return 0;
}