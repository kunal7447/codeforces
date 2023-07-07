#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n,k,q;
    cin>>n>>k>>q;
    ll arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    ll c = 0;
    ll sum = 0;
    for(int i=0;i<n;i++){
        if(arr[i]<=q){
            c++;
        }else{
          if(c>=k){
            ll m = c-k+1;
            ll v = (m*(m+1))/2;
            sum += v;
          }
          c=0;
        }
    }
    if(c>=k){
            ll m = c-k+1;
            ll v = (m*(m+1))/2;
            sum += v;
          }
          cout<<sum<<endl;
  }
}
