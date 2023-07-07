#include<bits/stdc++.h>
using namespace std;
int main(){
 int t;
 cin>>t;
 while(t--){
    int n,k;
    cin>>n>>k;
    int l = 0;
    int arr[n+1]={0};
   // int k = 0;
   int s = 0;
    for(int i=0;i<=n-1;i = i+k){
       if(n-i<s){
        break;
       }
       if(n-i<=i+1){
    if(arr[i+1]==0){
        int g = (n-i + i+1)/2;

        arr[g]=1;
            }
        break;
       }
        arr[i+1]=1;
        s = i+1;
        arr[n-i]=1;
       // k = n-i;

    }
    //cout<<endl;


    for(int i=1;i<=n;i++){
            //cout<<arr[i]<<" ";
        if(arr[i]==1){
            l++;
        }
    }
    cout<<l<<endl;
 }
}
