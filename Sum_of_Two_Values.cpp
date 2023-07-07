#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool f(pair<ll,ll> a,pair<ll,ll> b){
   return a.first<b.first;
}
int main(){
    ll n;
    cin>>n;
    ll target;
    cin>>target;
    vector<pair<ll,ll>> v(n);
    for(ll i = 0;i<n;i++){
        ll g;
        cin>>g;
        v[i].first = g;
        v[i].second = i+1;
    }
    sort(v.begin(),v.end(),f);
    for(int i=0;i<n;i++){
     //   cout<<v[i].first<<endl;
    }
    ll s = 0;
    ll e = n-1;
    int ch = 0;
    while(s<e){
        ll sum = v[s].first+v[e].first;
       // cout<<sum<<endl;
        if(sum==target){
                s = v[s].second;
        e = v[e].second;
            ch = 1;
            break;
        }else if(sum>target){
           e--;
        }else{
          s++;
        }
    }
    if(ch){
        cout<<min(s,e)<<" "<<max(s,e)<<endl;
    }else{
       cout<<"IMPOSSIBLE"<<endl;
    }
}
