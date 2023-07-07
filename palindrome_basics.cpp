#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll f(vector<ll> &v,ll t){
  int s= 1;
  int e = v.size()-1;
  while(s<=e){
    ll m = (s+e)/2;
    if(v[m]==t){
        return m;
    }else if(v[m]<t){
       s = m+1;
    }else{
     e = m-1;
    }
  }
  return e;
}
int main(){
 ll t;
 cin>>t;
 vector<ll> v;
    ll m = 1000000007;
    v.push_back(0);
    for(int i=1;i<=40001;i++){
        string h = to_string(i);
        int s = 0;
        int e = h.length()-1;
        int ch = 1;
        while(s<e){
            if(h[s]!=h[e]){
                    ch = 0;
                break;
            }
            s++;
            e--;
        }
        if(ch){
            v.push_back(i);
        }
    }

    vector<ll> test;
    ll maxi = 0;
 while(t--){
    ll n;
    cin>>n;
    test.push_back(n);
    maxi = max(maxi,n);
 }


       ll k = f(v,maxi);
            ll n = maxi;
    ll dp[k+1][n+1];
    for(int i=0;i<=k;i++){
        dp[i][0] = 1;
    }
    for(int i=0;i<=n;i++){
        dp[0][i]=0;
    }
    for(int i=1;i<=k;i++){
        for(int j=1;j<=n;j++){
        ll k = 0;
        if(j-v[i]>=0){
            k = dp[i][j-v[i]];
        }
        dp[i][j] = (dp[i-1][j] + k)%m;
        //cout<<dp[i][j]<<" ";
        }
     // cout<<endl;
    }




    for(int y = 0;y<test.size();y++){
             k = f(v,test[y]);
             n = test[y];

    cout<<dp[k][n]<<endl;
    }

}
