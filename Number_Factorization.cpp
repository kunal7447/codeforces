#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
   ll t;
   cin>>t;
   while(t--){
    ll n;
    cin>>n;
    vector<ll> v;
    map<ll,ll> m;
    ll i=2;
    ll p = n;
    while(i<=sqrt(n)){
        if(n%i==0){
            n = n/i;
            m[i]++;
        }else{
            i++;
        }
    }
    if(n>=2){
        m[n]++;
    }
    ll ans = 0;
    ll t = 1;
    vector<ll> v1;
    while(1){
            int c=0;
            t = 1;
        for(auto i : m){
               // cout<<i.first<<" "<<i.second<<endl;
            if(i.second!=0){
                t = t*i.first;
                m[i.first]--;
                //cout<<"second value "<<i.second<<endl;
            }else{
                c++;
            }
        }
   //- cout<<c<<endl;
    ans = ans + t;
    if(c==m.size()){
        break;
    }
    }
    cout<<ans-1<<endl;

   }
}
