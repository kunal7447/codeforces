#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;
    map<ll,ll> m;
    vector<ll> v(n+1);
    for(int i=1;i<=n;i++){
            ll k;
    cin>>k;
    m[k]++;
    v[i] = k;
    }
    ll mex = 0;
      for(auto i : m){
       //cout<<i.first<<" "<<i.second<<endl;
    }
    ll dif = 0;
    for(auto i : m){
        if(i.first==mex){
            mex++;
        }else{
            dif = i.first-mex;
          break;
        }

    }
    if(dif==0){
            ll q = 1;
        for(auto i : m){
            if(i.second>1){
                cout<<"YES"<<endl;
    q = 0;
                break;
            }
        }
        if(q){
            cout<<"NO"<<endl;
        }
        continue;
    }
    if(dif>1){
        cout<<"YES"<<endl;
        continue;
    }
    if(dif==1){
            ll r =0;
            ll l;
        for(int i=1;i<=n;i++){
            if(v[i]==mex+1){
                l = i;
                break;
            }
        }
        for(int i=n;i>=1;i--){
            if(v[i]==mex+1){
                r = i;
                break;
            }
        }
        for(int i=l;i<=r;i++){
            m[v[i]]--;
        }
    }
ll ch = 1;
    for(auto l : m){
        if(mex>l.first){
                if(l.second<=0){

                 ch = 0;
                }
        }
    }
    if(ch){
    cout<<"YES"<<endl;
    }else{
      cout<<"NO"<<endl;
    }
  }
}
