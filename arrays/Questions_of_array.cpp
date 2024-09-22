// Finding missing number:----

#include<bits/stdc++.h>
using namespace std;

// when there are n natural numbers :-

// int main(){
//     int arr[]={1,2,3,4,5,6,8,9,10,11,12};
//     int sum=0;
//     for(int i=0;i<11;i++){
//         sum += arr[i];
//     }
//     int total=((12*(12+1))/2);
//     cout<<total-sum;
//       return 0;
//   }

// if there are natural numbers started randomly from anywhere:-  [time:-O(n)]


// int main(){
//     int arr[]={6,7,8,9,10,11,13,14,15,16,17};
//     // here we can take the help of indexes, since every "i-arr[i]=arr[0]" which is 6 here and the one which is 7 is missing number.
//     int l=arr[0];
//     int h=arr[10];
//     int n=11;
//     int diff=l-0;
//     for(int i=0;i<n;i++){
//         if(arr[i]-i != diff){
//             cout<<i+diff;
//             break;
//         }
//     }
// return 0;
// }

// if there are more than one missing elements :---- [O(n)]

// int main(){
//     int arr[]={6,7,8,9,10,11,13,14,15,16,17};
//     // here we can take the help of indexes, since every "i-arr[i]=arr[0]" which is 6 here and the one which is 7 is missing number.
//     int l=arr[0];
//     int h=arr[10];
//     int n=11;
//     int diff=l-0;
//     for(int i=0;i<n;i++){
//         if(arr[i]-i != diff){
//         while(diff < arr[i]-i){
//             cout<<i+diff<<" ";
//             diff++;
//         }
//         }
//         }
// return 0;
// }


// Method of finding missing elements using hashing :----

/*int main(){
    int arr[]={3,7,4,9,12,6,1,11,2,10};
    int l=1;
    int h=12;
    int n=10;
    int H[12]={0};
    for(int i=0;i<n;i++){
        H[arr[i]]++;
    }
    for(int i=l;i<h;i++){
        if(H[i] == 0){
            cout<<i<<" ";
        }
    }

    return 0;
} */

// method of finding duplicates in an array:-------

// int main(){
//     int arr[]={3,6,8,8,10,12,15,15,15,20,20,36,36,40};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int lastDuplicate = 0;
//     for(int i=0;i<n;i++){
//         if(arr[i]==arr[i+1] && arr[i] != lastDuplicate){
//             cout<<arr[i]<<" ";
//             lastDuplicate=arr[i];
//         }
//     }
//     return 0;
// }

// We can also count the elements:-----  O(n)

// int main(){
//     int arr[]={3,6,8,8,10,12,15,15,15,20,20,36,36,40};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int j=0;
//     for(int i=0;i<n-1;i++){
//         if(arr[i]==arr[i+1]){
//             j=i+1;
//             while(arr[j] == arr[i]){j++;}
//             cout<<arr[i]<<" is appearing "<<(j-i)<<" times. "<<" ";
//             i=j-1;
//         }
//     }
//     return 0;
// }

// finding duplicates elements in an unsorted array:------ O(n^2)

// int main(){
    // int arr[]={8,3,6,4,6,5,6,8,2,7,7,7,7,8,3,3};
    // int count;
    // int n=sizeof(arr)/sizeof(arr[0]);
//     for(int i=0;i<n-1;i++){
//         count=1;
//         if(arr[i] != -1){
//         for(int j=i+1;j<n;j++){
//             if(arr[i] == arr[j]){
//                 count++;
//                 arr[j] = -1;
//             }
//         }
//         if(count > 1){
//             cout<<"Duplicate element "<<arr[i]<<" appears "<<count<<" times. "<<endl;
//         }
//     }
//     }
//     return 0;
// }

//method of finding duplicates in an unsorted array using hash table:----

// int main(){
//     int arr[]={8,3,6,4,6,5,6,8,2,7,7,7,7,8,3,3};
//     int count;
//     int n=sizeof(arr)/sizeof(arr[0]);
    // int max_value = arr[0];
    // for (int i = 1; i < n; i++) {
    //     if (arr[i] > max_value) {
    //         max_value = arr[i];
    //     }
    // }
    // vector<int> H(max_value + 1, 0);
//     for(int i=0;i<n;i++){
//         H[arr[i]]++;
//     }
//     for(int i=0;i<=max_value;i++){
//         if(H[i] > 1){
//                 cout<<i<<" appears "<<H[i]<<" times. "<<endl;
//         }
//     }
//     return 0;
// }

// Finding pair of elements with sum k:----- O(n^2)

// int main(){
//     int arr[]={6,3,8,10,16,7,5,2,9,14};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int k;
//     cout<<"Enter the number whose pair you want as a sum: ";
//     cin>>k;
//     for(int i=0;i<n-1;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[i]+arr[j] == k){
//                 cout<<arr[i]<<" + "<<arr[j]<<" = "<<k<<endl;
//             }
//         }
//     }
//     return 0;
// }

// Using hashing:-----
// Method 1:--

/* int main(){
    int arr[]={6,3,8,10,16,7,5,2,9,14};
    int n=sizeof(arr)/sizeof(arr[0]);
    int max_value = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max_value) {
            max_value = arr[i];
        }
    }
    vector<int> H(max_value + 1, 0);
    
    int k;
    cout<<"Enter the number whose pair you want as a sum: ";
    cin>>k;

    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j] == k){
                cout<<arr[i]<<" + "<<arr[j]<<" = "<<k<<endl;
            }
        }
    }

    return 0;
 } */

// Method 2:---  O(n).

/*int main(){
    int arr[]={6,3,8,10,16,7,5,2,9,14};
    int n=sizeof(arr)/sizeof(arr[0]);
    int max_value = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max_value) {
            max_value = arr[i];
        }
    }
    vector<int> H(max_value + 1, 0);
    
    int k;
    cout<<"Enter the number whose pair you want as a sum: ";
    cin>>k;

    for(int i=0;i<n;i++){
        if(H[k-arr[i]] != 0){
            cout<<arr[i]<<" + "<<k-arr[i]<<" = "<<k<<endl;
        }
        H[arr[i]]++;
    }

    return 0;
    
} */

// Finding pair of elements with sum k in sorted array :----- O(n)

/*int main(){
    int arr[]={1,3,4,5,6,8,9,10,12,14};
    int n=sizeof(arr)/sizeof(arr[0]);

    int k;
    cout<<"Enter the number whose pair you want as a sum: ";
    cin>>k;

    int i=0;
    int j=n-1;
    while(i<j){
        if(arr[i]+arr[j] == k){
            cout<<arr[i]<<" + "<<arr[j]<<" = "<<k<<endl;
            i++;
            j--;
        }
        
        else if((arr[i]+arr[j])<k){
            i++;
        }
        else{
            j--;
        }
    }

    return 0;
} */


// Method of finding max and min element in a single scan:---  O(n)

int main(){
    int arr[]={5,8,3,9,6,2,10,7,-1,4};
    int min=arr[0];
    int max=arr[0];

    int n=sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
        else if(arr[i]>max){
            max=arr[i];
        }
    }
cout<<max<<endl<<min<<endl;

}