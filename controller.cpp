#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
  ll n;
  cin>>n;
  string h;
  cin>>h;

  ll plus = 0;
  ll minus = 0;
  for(int i=0;i<n;i++){
    if(h[i]=='+'){
        plus++;
        continue;
    }
    minus++;
  }
  ll t;
  cin>>t;
  while(t--){
        ll x,y;
  cin>>x>>y;
  if(plus==minus){
    cout<<"YES"<<endl;
    continue;
  }
  if(x==y){
    cout<<"NO"<<endl;continue;
  }
  ll ch = 0;
    ll p = plus;
    ll m = minus;
  //  cout<<"dfsdfs"<<endl;
    ll q = max(x,y);
    ll w = min(x,y);
   ll dif = min(p,m)*q - max(p,m)*w;

   ll d = abs(dif)/abs(x-y);
  // ll ab = abs(d);
   p = p-d;
   m = m-d;
//cout<<p<<" "<<m<<endl;
    if(min(p,m)*q == max(p,m)*w){
        cout<<"YES"<<endl;
    }else{
    cout<<"NO"<<endl;
    }
  }

}
