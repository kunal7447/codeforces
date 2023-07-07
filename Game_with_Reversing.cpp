#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    string h;
    string g;
    cin>>h>>g;
    int w = 0;
    int e = 0;
    for(int i=0;i<n;i++){
        if(h[i]!=g[i]){
            w++;
        }
        if(h[i]!=g[n-i-1]){
            e++;
        }
    }
    int s = 0;
    int r = 0;
  if(w%2==0){
    s = w+w;
  }else{
    s = w+w-1;
  }

  if(e%2==0){
    r = e+e-1;
    if(e==0){
        r = 2;
    }
  }else{
    r = e+e;
  }
    cout<<min(s,r)<<endl;
  }
}
