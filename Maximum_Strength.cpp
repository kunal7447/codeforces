#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    string h;
    string g;
    cin>>h>>g;
    while(g.length()!=h.length()){
        h = "0"+h;
    }
    int ans = 0;
    int ch = 0;
    for(int i=0;i<g.length();i++){
            if(ch){
                ans = ans +9;
                continue;
            }
        if(h[i]!=g[i]){
            ans = ans + abs(h[i]-g[i]);
            ch = 1;
        }
    }
    cout<<ans<<endl;
  }
}
