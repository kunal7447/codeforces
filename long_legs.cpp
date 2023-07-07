#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll fn(ll n){
  for(ll i = sqrt(n);i>=1;i--){
    if(n%i==0){

        return n/i;
    }
  }
}
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll x,y;
        cin>>x>>y;
        ll c = 0;
        ll n = 200000;
        ll a = 2000000000000;
        for(ll i = 1;i<=n;i++){
            c += (x+i-1)/i ; c += (y+i-1)/i;
            c+=i-1;
            a = min(a,c);
            c=0;

        }
        cout<<a<<endl;
    }
return 0;
}
