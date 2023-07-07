#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll a,b;
        ll n,m;
        cin>>a>>b>>n>>m;
        ll k = a;

        ll d = n/(m+1);
        ll q = k*(m)*d;
       //cout<<q<<endl;
        ll o = n%(m+1);
        ll z = ((n)-(o))*b;
        ll ans  = min(q,z);
        ll v = o*a;
        ll x = o*b;
        ans = ans + min(v,x);
        cout<<ans<<endl;
    }
return 0;
}
