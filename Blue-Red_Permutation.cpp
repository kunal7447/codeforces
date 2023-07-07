#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;
    ll arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    string h;
    cin>>h;
    vector<ll> r;vector<ll> b;
    for(int i=0;i<n;i++){
            if(h[i]=='B'){
                continue;
            }
        r.push_back(arr[i]);
    }
    for(int i=0;i<n;i++){
            if(h[i]=='R'){
                continue;
            }
        b.push_back(arr[i]);
    }
    int c = 0;

    sort(r.begin(), r.end(), std::greater<>());
    sort(b.begin(), b.end());

    for(int i = 0;i<r.size();i++){
           // cout<<" "<<r[i]<<endl;
        if(r[i]<=n-i){
            c++;
        }
    }

    for(int i = 0;i<b.size();i++){
        if(b[i]>=i+1){
            c++;
        }
    }
    //cout<<c<<endl;
    if(c==n){
        cout<<"YES"<<endl;
    }else{
       cout<<"NO"<<endl;
    }
  }
}
