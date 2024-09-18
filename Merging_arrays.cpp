// theta of (m+n).
#include<bits/stdc++.h>
using namespace std;

class Arrays
{
private:
    int A1[10];
    int A2[10];
    int* A3;
    int size;
    int length1;
    int length2;
    int length3;
    

public:
    
    Arrays(int arr1[],int arr2[],int s,int l1,int l2){
        size=s;
        length1=l1;
        length2=l2;
        length3=length1+length2;
        for(int i=0;i<length1;i++){
            A1[i]=arr1[i];
            A2[i]=arr2[i];
        }
    }

    int* merge(){
        int i,j,k;
        i=j=k=0;
        A3=new int[length3];

        while (i<length1 && j<length2)
        {
            if(A1[i]<A2[j]){
                A3[k++]=A1[i++];
            }
            else{
                A3[k++]=A2[j++];
            }
        }
        for(;i<length1;i++){
            A3[k++]=A1[i];
        }
        for(;j<length2;j++){
            A3[k++]=A2[j];
        }
        
        return A3;
    }

    void display(){
        for(int i=0;i<length3;i++){
            cout<<A3[i]<<" ";
        }
        cout<<endl;
    }
};

int main(){
    int arr1[]={1,2,3,4,5};
    int arr2[]={6,7,8,9,10};

    Arrays array(arr1,arr2,10,5,5);
    int* arr3=array.merge();
    array.display();
}