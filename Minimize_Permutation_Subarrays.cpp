#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;
    ll arr[n+1];
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    ll f[n+1];
    for(int i=1;i<=n;i++){
        f[arr[i]]=i;
    }
    if((f[n]>f[1] && f[n]<f[2]) || (f[n]<f[1] && f[n]>f[2])){
        cout<<1<<" "<<1<<endl;
    }else{
       if(abs(f[n]-f[1])> abs(f[n]-f[2])){
        cout<<min(f[n],f[2])<<" "<<max(f[n],f[2])<<endl;
       }else{
               cout<<min(f[n],f[1])<<" "<<max(f[n],f[1])<<endl;

       }
    }
  }
}
