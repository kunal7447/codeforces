#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n,q;
    cin>>n>>q;
    ll a[n+1];
    ll sum = 0;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        sum = sum+a[i];
    }
    ll c=0;
    ll k=0;
    map<ll,ll> m;
    while(q--){
        ll t;
        cin>>t;

        if(t==1){
            ll j,x;
            cin>>j>>x;

                    auto it = m.find(j);
               if(it!=m.end()){
                sum = sum+x-it->second;
               }else{
                if(k==1){
                    sum=sum-c+x;
                }else{
                   sum=sum+x-a[j];
                }
                }


            a[j]=x;
            m[j]=x;
            cout<<sum<<endl;

        }else{
            ll x;
            cin>>x;
            sum = n*x;
            cout<<sum<<endl;
            c=x;
            k=1;
            m.clear();
        }
    }
return 0;
}
