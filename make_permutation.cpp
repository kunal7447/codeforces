#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n,r,a;
    cin>>n>>r>>a;

    vector<ll> v;
    v.push_back(0);
    for(int i=1;i<=n;i++){
            ll k;
    cin>>k;
        v.push_back(k);
    }
    ll ans = 1000000000000;
    sort(v.begin(),v.end());
    ll sum = 0;
    if(v[1]!=1){
        v.push_back(1);
        sort(v.begin(),v.end());
        ans = a+(n)*r;
        sum = a;
        n++;
    }else{
      ans = (n-1)*r;
    }


    for(int i=2;i<=n;i++){
         //   cout<<v[i]<<" ";
      if(v[i]==v[i-1]){
        sum = sum + r;
        //continue;
      }else if(v[i]==v[i-1]+1){
       //continue;
      }else if(v[i]>v[i-1]+1){
        sum = sum + (v[i]-v[i-1]-1)*a;

      }
      ans = min(ans,sum + (n-i)*r);
    }
    cout<<ans<<endl;

  }
}
