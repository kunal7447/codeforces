#include<bits/stdc++.h>
using namespace std;
#define ll long long
void dfs(int i,vector<vector<ll>> &graph,vector<unordered_set<ll>> &v,int vis[]){
   // cout<<i<<endl;
    vis[i] = 1;
    for(int k = 0;k<graph[i].size();k++){
            ll s= v[graph[i][k]].size();
        for(auto l : v[i]){
            v[graph[i][k]].insert(l);
        }
    if(v[graph[i][k]].size()!=s){
        dfs(graph[i][k],graph,v,vis);
    }
    }
}
int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;
    ll arr[n+1][n+1];
 //   cout<<n<<endl;
    int c = 0;
    for(int i=1;i<=n;i++){
     string h;
     cin>>h;
     int o = 1;
     for(int j=0;j<h.length();j++){
        arr[i][o++] = int(h[j]-48);
       // cout<<arr[i][o-1]<<" ";
     }
    // cout<<endl;
    }
  //  cout<<"sdcsd"<<endl;
    vector<unordered_set<ll>> v(n+1);
    for(int i=1;i<=n;i++){
        v[i].insert(i);
    }
    vector<vector<ll>> graph(n+1);
    int vis[n+1]={0};
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i!=j){
                if(arr[i][j]==1){
                    graph[i].push_back(j);

                }
            }
        }
    }
   // cout<<"reached"<<endl;

    for(int i=1;i<=n;i++){
       //cout<<i<<" -> ";
      if(vis[i]==0){
        dfs(i,graph,v,vis);
      }
      // cout<<endl;
    }
    for(int i=1;i<=n;i++){
        cout<<v[i].size()<<" ";
        for(auto l : v[i]){
            cout<<l<<" ";
        }
        cout<<endl;
    }
  }
}
