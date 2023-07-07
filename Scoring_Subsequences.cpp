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
    for(int i=1;i<=n;i++){
        ll ans = 1;
        ll s = 1;
        ll e = i;
        while(s<=e){
            ll mid = (s+e)/2;
            if(arr[mid]==i-mid+1){
                ans = i-mid+1;
                break;
            }
            if(arr[mid]>i-mid+1){
                e = mid-1;
                ans = i-mid+1;
            }else{
              s = mid+1;
            }
        }
        cout<<ans<<" ";
    }
    cout<<endl;
  }
}
