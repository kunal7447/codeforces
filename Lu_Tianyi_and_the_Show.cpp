#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n,m;
    cin>>n>>m;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> v;
    int f[m+1]={0};
    int o = 0;
    int l = 0;
    for(int i=0;i<n;i++){
        if(arr[i]==-1){
            o++;
        }else if(arr[i]==-2){
            l++;
        }else{
          if(f[arr[i]]==0){
            v.push_back(arr[i]);
            f[arr[i]]=1;
          }
        }
    }
    sort(v.begin(),v.end());
    int ans = 0;
    ans = max(o+v.size(),l+v.size());
    ans = min(ans,m);
    int y = v.size();
    for(int i=0;i<v.size();i++){
        int k = min(o + i,v[i]-1)+min(l+y-i-1,m-v[i])+1;
        ans = max(k,ans);
    }

    cout<<ans<<endl;
  }
}
