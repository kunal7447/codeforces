#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n,m;
    cin>>n>>m;
    vector<vector<ll>> v(n+m+1);
    vector<ll> pre(n+1);
    ll bappi[n+m+1]={0};
    for(int i=1;i<=n;i++){
        int h;
        cin>>h;
        v[h].push_back(0);
        pre[i] = h;
    }
    for(int i=1;i<=m;i++){

        ll h,g;
        cin>>g>>h;
        v[pre[g]].push_back(i);
        bappi[pre[g]] += v[pre[g]][1]- v[pre[g]][0];

        v[pre[g]].pop_back();v[pre[g]].pop_back();
        pre[g] = h;
        v[h].push_back(i);

    }
    for(int i=1;i<=n+m;i++){
        if(v[i].size()==1){
            bappi[i] += m+1-v[i][0];
        }
       // for(int b=1;b<=m+n;b++){
              //  cout<<bappi[b]<<" ";
         //   }
          //  cout<<endl;
    }
    ll ans = 0;
    for(int i=1;i<=n+m;i++){
        if(bappi[i]>0){
            ans = ans + (bappi[i]*(m+1-bappi[i]))+(bappi[i]*(bappi[i]-1)/2);
            //cout<<ans<<endl;
        }
    }
    cout<<ans<<endl;
  }
}
