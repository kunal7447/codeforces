#include<bits/stdc++.h>
using namespace std;
int main(){
 int n;
 cin>>n;
 int arr[n];
 int e = 0;
 int o = 0;
 for(int i=0;i<n;i++){
        cin>>arr[i];
    if(arr[i]%2==0){
       arr[i]=0;
       e++;
    }else{
       arr[i]=1;
       o++;
    }
 }
 int x = 0;
 if(e==1){
    x = 0;
 }else{
    x = 1;
 }
 for(int i=0;i<n;i++){
    if(arr[i]==x){
        cout<<i+1<<endl;
        break;
    }
 }

}
