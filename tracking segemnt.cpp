#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n,m1;
    cin>>n>>m1;
    vector<pair<int,int>> v;
    for(int i=0;i<m1;i++){
            int a,b;
         cin>>a>>b;
        v.push_back({a,b});
    }
    vector<int> l;
    int q;
    cin>>q;
    for(int i=0;i<q;i++){
        int k;
        cin>>k;
        l.push_back(k);
    }
    int s = 0;
    int e = q;
    int ans = -1;
    while(s<=e){
        int m = (s+e)/2;
        int temp[n+1]={0};
        for(int i=0;i<m;i++){
            temp[l[i]]=1;
        }
        int r = 0;
        for(int i=1;i<=n;i++){
            if(temp[i]==0){
                r--;
                temp[i] = r;
            }else{
              r++;
              temp[i] = r;
            }
        }
        int ch = 0;
        for(int i=0;i<v.size();i++){
            if(temp[v[i].second]-temp[v[i].first-1]>0){
                ch = 1;
                break;
            }
        }
        if(ch){
            e = m-1;
            ans = m;
        }else{
          s = m+1;
        }
    }
    cout<<ans<<endl;
  }
}
