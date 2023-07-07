#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
  ll t;
  t = 1;
  while(t--){
    vector<ll> alpha[26];
    int n,m;
    cin>>n>>m;
    string h,g;
    cin>>h>>g;
    for(int i=0;i<n;i++){
        alpha[h[i]-97].push_back(i+1);
    }
    ll maxi = 0;
    for(int i=1;i<m;i++){
           // cout<<alpha[g[i]][0]<<endl;
        maxi = max(maxi,alpha[g[i]-97][alpha[g[i]-97].size()-1]-alpha[g[i-1]-97][0]);
    }
    cout<<maxi<<endl;
    for(int i=0;i<26;i++){
        alpha[i].clear();
    }
  }
}
