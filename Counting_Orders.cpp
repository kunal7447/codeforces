#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll f(int s,ll a[],ll t,int e){
    ll j = e;
    while(s<e){
        int m = (s+e)/2;
        if(a[m]<=t){
            s = m+1;
        }else{
            e = m;
        }

        }
        if(a[s]>t){
            return j-s+1;
        }
            return 0;
    }

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;
    ll a[n+1];
    ll b[n+1];
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }

    for(int i=1;i<=n;i++){
        cin>>b[i];
    }
    sort(a+1,a+n+1);
    sort(b+1,b+n+1);

    int s = 1;
    int e = n;
    while(s<e){
        ll temp = b[s];
        b[s]=b[e];
        b[e]= temp;
        s++;
        e--;
    }
    ll ans = 1;
    for(int i=1;i<=n;i++){
        ans = ans*f(1,a,b[i],n-i+1);
        ans = ans%1000000007;
         //cout<<f(1,a,b[i],n-i+1)<<endl;
    }
cout<<ans<<endl;

  }
}
