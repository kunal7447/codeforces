#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool f(pair<ll,ll> a, pair<ll,ll> b){
    return ((a.first<b.first) || (a.first==b.first && a.second>b.second));
}

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        map<ll,ll> m;
        vector<pair<ll,ll>> v;
        v.resize(n);
        for(int i=0;i<n;i++){
            ll h,g;
            cin>>h>>g;
            v[i] = {h,g};
        }
        sort(v.begin(),v.end(),f);
        ll sum = 0;
        ll c = 0;
        for(int i=0;i<n;i++){
                c = 0;
                ll j = i;
                while(v[j].first==v[i].first){
                        if(c!=v[i].first){
                    sum = sum + v[j].second;
                    c++;
                        }
                        j++;
                }
                i = j-1;
        }
        cout<<sum<<endl;
        v.clear();
    }
    return 0;
}
