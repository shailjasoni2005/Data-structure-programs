#include<bits/stdc++.h>
#include<cctype>
using namespace std;

// counting vowels and consonants:-
// int main(){
//     string A="Hello world!";
//     int vcount=0;
//     int cCount=0;
//      for(int i=0;i<A.length();i++){
//         A[i]=tolower(A[i]);
//      }
//     for(int i=0;i<A.length();i++){
//         if(A[i]=='a' || A[i]=='e' || A[i]=='i' || A[i]=='o' || A[i]=='u'){
//             vcount++;
//         }
//         else if((A[i]>=65 && A[i]<=90) || (A[i]>=97 && A[i]<=122)){
//             cCount++;
//         }
//     }
//     cout<<vcount<<" "<<cCount<<" ";
//     return 0;
// }

// counting words:-
// int main(){
//     string A="Hello world! I am shailja";
//     int i=0,word=1;
//     for(int i=1;i<A.length();i++){
//         if(A[i]==' ' && A[i-1] != ' '){
//             word++;
//         }
//     }
//     cout<<word<<" ";
//     return 0;
// }


//validating a string
int valid(string &name){
    // for(int i=0;i<name.length();i++){
    //     if(!(name[i]>=65 && name[i]<=90) && !(name[i]>=97 && name[i]<=122) && !(name[i]>=48 && name[i]<=57) ){
    //         return 0;
    //     }
    // }
    for(int i=0;i<name.length();i++){
        if(!isalpha(name[i]) && !isdigit(name[i])){
            return 0;
        }
    }
    return 1;
}

// reversing a string:-
void reverse(string &name){
    reverse(name.begin(), name.end());
    cout<<name<<endl;
}

// comparing two string and checking palindrome
int comp(string &name1,string &name2){
    return (name1.compare(name2));
}

void padrm(string s){
    int n=s.length();
    for(int i=0;i<n/2;i++){
        if(s[i]!=s[n-i-1]){
            cout<<"false"<<endl;
        }
    }
    cout<<"true"<<endl;
}



int main(){
    string name= "Ani?321";
    string name1="shailja";
    string name2="shailja";
    string s="amma";
    // cout<<valid(name);
    // reverse(name);
    // cout<<comp(name1,name2)<<endl;
    // padrm(s);


    return 0;
}