#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll bin(ll t,ll arr[],ll s,ll e){
    ll k = arr[s-1];
   while(s<=e){
    ll m = (s+e)/2;
    if(arr[m]-k==t){
        return m;
    }else if(arr[m]-k<t){
      s = m+1;
    }else{
      e = m-1;
    }
   }
   return s;
}
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
    vector<pair<ll,ll>> v;
    for(int i=1;i<=n-1;i++){
        v.push_back({arr[i]-arr[i+1],i+1});
    }
    sort(v.begin(),v.end());

    for(int i = 0;i<v.size();i++){
        cout<<v[i].second<<" ";
    }
    cout<<1<<" "<<endl;

  }
}
