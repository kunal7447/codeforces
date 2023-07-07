#include<bits/stdc++.h>
using namespace std;
#define ll long long
int f(int s,int e,ll t,ll sub,ll arr[]){
   int ans = 0;
   int d = s;
   while(s<=e){
    int m = (s+e)/2;
    if(arr[m]-sub<=t){
        ans = m;
        s = m+1;
    }else{
      e = m-1;
    }
   }
   if(ans>=d){
    return ans -d +1;
   }
   return 0;

}
int main(){
 int t=1;
 //cin>>t;
 while(t--){
    int n;
    cin>>n;
    ll h;
    cin>>h;
    long long arr[n+1];
    arr[0]=0;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
        arr[i] +=arr[i-1];
    }
    int z = 0;
    for(int i=1;i<=n;i++){
         z = max(z,f(i,n,h,arr[i-1],arr));
    }
    cout<<z<<endl;


 }

}
