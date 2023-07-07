#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool f(pair<ll,ll> a,pair<ll,ll> b){
   return a.second<b.second;
}
int main(){
    int n;
    cin>>n;
    vector<pair<ll,ll>> v(n);
    for(int i=0;i<n;i++){
        ll s,e;
        cin>>s>>e;
        v[i].first = s;
        v[i].second = e;
    }
    sort(v.begin(),v.end(),f);
    int count = 0;
    ll start_time = 0;
    for(int i=0;i<n;i++){
        if(v[i].first>=start_time){
            count++;
            start_time = v[i].second;
        }
    }
    cout<<count<<endl;
}
