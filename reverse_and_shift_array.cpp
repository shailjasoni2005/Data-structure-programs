#include<bits/stdc++.h>
using namespace std;

class Array
{
private:
    int* A;
    int size;
    int length;
public:
    Array(int arr[],int s,int l){
        size=s;
        length=l;
        A=new int[size];
        for(int i=0;i<length;i++){
            A[i]=arr[i];
        }
    }

    ~Array() {
        delete[] A; 
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

    // Method 1---------

    void Reverse(){
        int* B = new int [length];
        for(int i=length-1,j=0;i>=0;i--,j++){
            B[j]=A[i];
        }
        for(int i=0;i<length;i++){
            A[i]=B[i];
        }
    }

    // method2--------

    void Reverse2(){
        int i,j;
        for(i=0,j=length-1;i<j;i++,j--){
            Swap(i,j);
        }
    }

    
// shift and rotation

// Left shift:----

    void LeftShift(){
        for(int i=0;i<length-1;i++){
            A[i]=A[i+1];
        }
        A[length-1]=0;
    }

    void LeftRotation(){
        int num=A[0];
        for(int i=0;i<length-1;i++){
            A[i]=A[i+1];
        }
        
         A[length-1]=num;
    }

    // similarly we can perform right rotation.

};

int main(){
    int arr[]={2,3,4,5,6};
    Array array(arr,5,5);

    // cout<<array.Get(2)<<endl;
    // array.Set(3,15);
    // cout<<array.Max()<<endl;
    // cout<<array.Min()<<endl;
    // cout<<array.Sum()<<endl;
    // cout<<array.Average()<<endl;
    // array.Reverse();
    // array.Reverse2();

    // array.LeftShift();
    array.LeftRotation();
    array.Display();

    return 0;
}


