#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll f(vector<ll> &v,ll k,ll z,ll n){
   ll s = 1;
   ll e = n;
   while(s<=e){
    ll m = (s+e)/2;
    if(v[m]>=min(k,z) && v[m]<=max(k,z)){
        return m;
    }else if(v[m]<min(k,z)){
       s = m+1;
     }else if(v[m]>max(k,z)){
       e = m-1;
     }
   }
   return -1;
}
struct quad{
 ll a;
 ll b;
 ll c;
};
int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n,m;
    cin>>n>>m;
    vector<ll> v(n+1);
    for(int i=1;i<=n;i++){
        ll g;
        cin>>g;
        v[i] = g;
    }
    vector<quad> r(m+1);
    for(int i=1;i<=m;i++){
        ll f,g,h;
        cin>>f>>g>>h;
        r[i].a = f;
        r[i].b = g;
        r[i].c = h;
    }
    sort(v.begin()+1,v.end());

    ll ans = 0;
    for(int i=1;i<=m;i++){

        if(r[i].c<=0){
            cout<<"NO"<<endl;
            continue;
        }

        ll w = int(sqrt(4*r[i].a*r[i].c));

        ll k,z;
        if(w*w!=4*r[i].a*r[i].c){
             k = r[i].b - w;
             z = r[i].b + w;

        }
        if(w*w==4*r[i].a*r[i].c){
            k = r[i].b - w+1;
            z = r[i].b +w-1;
        }
        ll x = f(v,k,z,n);
        if(x==-1){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
          cout<<v[x]<<endl;
        }
    }
  }
}
