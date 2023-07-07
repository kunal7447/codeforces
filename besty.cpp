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
        ll g = arr[0];
        for(int i=0;i<n;i++){
            g = __gcd(arr[i],g);
        }
        ll s =0;
        int j = n;
        if(g!=1){
        for(ll i=n-1;i>=0;i--){
                ll k = __gcd(i+1,arr[i]);
            if(__gcd(k,g)==1){
                j = i+1;
                break;
            }
        }

        for(ll i=n-1;i>=0;i--){
            ll k = __gcd(arr[i],i+1);
            ll a = k;
            ll c = 1;
            while(arr[i]!=k){
                arr[i]=k;
                k = __gcd(k,i+1);
                if(g>__gcd(k,g)){
                s = s+n-i;
                g = __gcd(k,g);
                if(g==1){
                        c=0;
                    break;
                }
            }else{
              break;
            }
            }
            if(c==0){
                break;
            }

        }
        }
       // cout<<j<<" "<<s<<endl;
        cout<<min(n-j+1,s)<<endl;
    }
return 0;
}
