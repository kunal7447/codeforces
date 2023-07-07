#include<bits/stdc++.h>
#include<map>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n,m1;
    cin>>n>>m1;
    map<int, int> m;
    vector<vector<int>> v(n+1);
    for(int i=0;i<m1;i++){
        int g;
        int h;
        cin>>g>>h;
        v[g].push_back(h);
        v[h].push_back(g);
    }
    for(int i =1;i<=n;i++){
        int h = v[i].size();
        if(h>1){
            m[h]++;
        }
    }
    int x,y;
    if(m.size()>1){
        for(auto i : m){
            if(i.second==1){
                x = i.first;
               // cout<<x<<endl;
            }else{
                y = i.first-1;
                //cout<<y<<endl;
            }
        }
    }else{
      for(auto i : m){
        x = i.first;
        y = x-1;
      }
    }
    cout<<x<<" "<<y<<endl;
  }

}
