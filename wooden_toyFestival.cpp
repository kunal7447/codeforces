#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool f(ll m,ll arr[],ll n){
  ll mini = arr[1];
  ll maxi = arr[1];
  ll c = 1;
  for(int i=2;i<=n;i++){
    if(((arr[i]-mini+1)/2)>m){
        c++;
        mini = arr[i];
    }
  }
  if(c>3){
    return false;
  }
  return true;
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
    sort(arr+1,arr+n+1);
    ll s = 0;
    ll h = 1000000000001;
    ll ans = h;
    while(s<=h){
        ll m = (h+s)/2;
        if(f(m,arr,n)){
            h = m-1;
            ans = m;
        }else{
        s = m+1;
            }
    }
    cout<<ans<<endl;
}
}
