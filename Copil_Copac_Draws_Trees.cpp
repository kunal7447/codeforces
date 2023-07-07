#include<bits/stdc++.h>
using namespace std;
int dfs(vector<vector<pair<int,int>>> v,int i,int vis[],int pre,vector<int> vip){

    vis[i]=1;
    int sum = 0;
    int ch = 0;
    for(int k=0;k<v[i].size();k++){
        if(vis[v[i][k].first]==0 && v[i][k].second>pre){
                //vip.push_back(v[i][k].first);
            sum = sum + dfs(v,v[i][k].first,vis,v[i][k].second,vip);
        }else if(vis[v[i][k].first]==0 && v[i][k].second<pre){
            ch = 1;
           sum = sum + dfs(v,v[i][k].first,vis,v[i][k].second,vip);
        }
    }
    //cout<< i << " "<<sum<<endl;
    if(ch==1){
        sum = sum +1;
    }
    return sum;
}
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    vector<vector<pair<int,int>>> v(n+1);
    vector<pair<int,int>> f;
    vector<int> vip;
    for(int i=1;i<=n-1;i++){
            int g,h;
         cin>>g>>h;
        v[g].push_back({h,i});
        v[h].push_back({g,i});
        f.push_back({g,h});
    }
    int vis[n+1]={0};
    vis[1]=1;
   cout<<dfs(v,1,vis,0,vip)+1<<endl;
  }
}
