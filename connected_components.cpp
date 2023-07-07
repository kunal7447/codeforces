#include<bits/stdc++.h>
using namespace std;
void dfs(int i,vector<vector<int>> &v,int vis[]){
   vis[i]=1;
   for(int k=0;k<v[i].size();k++){
    if(vis[v[i][k]]==0){
        dfs(v[i][k],v,vis);
    }
   }
}

int no_cycle(int i,vector<vector<int>> &v,int vis[],int p){
   vis[i]=1;
   int sum = 0;
   for(int k=0;k<v[i].size();k++){
        if(vis[v[i][k]]==1 && v[i][k]!=p){
            sum++;
        }
    if(vis[v[i][k]]==0){
        sum += no_cycle(v[i][k],v,vis,i);
    }
   }
   return sum;
}
int main(){
  int n,m;
  cin>>n>>m;
  vector<vector<int>> v(n+1);
    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    int vis[n+1]={0};
    int c = 0;
    for(int i=1;i<=n;i++){
        if(vis[i]==0){
            dfs(i,v,vis);
            c++;
        }
    }
    cout<<"connected components are ";
    cout<<c<<endl;
    cout<<no_cycle(1,v,vis,0);
}
