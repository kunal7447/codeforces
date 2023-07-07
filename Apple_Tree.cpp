#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll dfs(vector<vector<ll>> &v,int i,int par,ll dp[]){
     ll ch = 0;
     ll sum = 0;
     for(int k=0;k<v[i].size();k++){
        if(v[i][k]!=par){
          sum = sum + dfs(v,v[i][k],i,dp);
          ch = 1;
        }
     }
     if(ch==0){
        dp[i] = 1;
        return 1;
     }
     //cout<<sum<<endl;
     return dp[i] = sum;
}
int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;
    vector<vector<ll>> v(n+1);

    for(int i=0;i<n-1;i++){
        ll x,y;
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    ll dp[n+1]={0};
    dfs(v,1,0,dp);
    //for
    int q;
    cin>>q;
    for(int i=0;i<q;i++){
        ll x,y;
        cin>>x>>y;
        ll ans = dp[x]*dp[y];
        cout<<ans<<endl;

    }

  }
}
