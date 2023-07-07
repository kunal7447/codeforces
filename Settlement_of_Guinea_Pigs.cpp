#include<bits/stdc++.h>
using namespace std;

int main(){
 int t;
 cin>>t;
 while(t--){
int n;
cin>>n;
int arr[n];
int k = n-1;
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int h = 0;
int ned = 0;
int u = 0;
int c = 0;
 for(int i=0;i<n;i++){
    if(arr[i]==1){
            c++;
       ned++;
       if(h-u>=1){
        u++;
       }else{
        h++;
        u++;
       }
    }else{
        if(c==0){
            u = 0;
        }else{
       u = (c/2) +1;
        }
       ned = 0;
    }
 }
cout<<h<<endl;
 }

}
