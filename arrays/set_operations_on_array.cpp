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
        }
        for(int i=0;i<length2;i++){
            A2[i]=arr2[i];
        }
        A3 = new int[length3];
    }

    ~Arrays() {
        delete[] A3;  // Free allocated memory
    }

    // union

    int* Union(){
        int i,j,k;
        i=j=k=0;

        while (i<length1 && j<length2)
        {
            if(A1[i]<A2[j]){
                A3[k++]=A1[i++];
            }
            else if(A2[j]<A1[i]){
                A3[k++]=A2[j++];
            }
            else{
                A3[k++]=A1[i++];
                j++;
            }
        }
        for(;i<length1;i++){
            A3[k++]=A1[i];
        }
        for(;j<length2;j++){
            A3[k++]=A2[j];
        }
        
        length3=k;
        
        return A3;
    }


    // intersection

    int* Intersection(){
        int i,j,k;
        i=j=k=0;
        A3=new int[length3];

        while (i<length1 && j<length2)
        {
            if(A1[i]<A2[j]){
                i++;
            }
            else if(A2[j]<A1[i]){
                j++;
            }
            else{
                A3[k++]=A1[i++];
                j++;
            }
        }
        
        length3=k;
        return A3;
    }

    int* Difference(){
        int i,j,k;
        i=j=k=0;

        while (i<length1 && j<length2)
        {
            if(A1[i]<A2[j]){
                A3[k++]=A1[i++];
            }
            else if(A2[j]<A1[i]){
                j++;
            }
            else{
                i++;
                j++;
            }
        }
        for(;i<length1;i++){
            A3[k++]=A1[i];
        }
        
        length3=k;
        
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
    int arr1[]={2,6,10,15,25};
    int arr2[]={3,6,7,15,20};

    Arrays array(arr1,arr2,10,5,5);
    // int* arr3=array.Union();
    // int* arr3=array.Intersection();
    int* arr3=array.Difference();
    array.display();
}