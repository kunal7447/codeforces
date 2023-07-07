#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;
    ll pmax[n+1] = {0};
    ll nmax[n+1] = {0};
    ll pcur[n+1] = {0};
    ll ncur[n+1] = {0};
    pmax[1] = 1;
    pcur[1] = 1;
    ll c = 1;
    for(int i=0;i<n;i++){
        char h;
        cin>>h;
        if(h=='+'){
                c++;
            ll x,y;
            cin>>x>>y;

                pcur[c] = pcur[x]+y;

               // ll k = 0;


              ncur[c] = ncur[x] +y;

              ll k = 0;
              pcur[c] = max(k,pcur[c]);
             ncur[c] = min(k,ncur[c]);
            pmax[c] = max(pmax[x],pcur[c]);
            nmax[c] = min(nmax[x],ncur[c]);

        }else{
          ll x,y,z;
          cin>>z>>x>>y;
          if(nmax[x]<=y && pmax[x]>=y){
            cout<<"YES"<<endl;
          }else{
            cout<<"NO"<<endl;
          }
        }
    }

  }
}
