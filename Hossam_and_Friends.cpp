#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll f(ll n){
    return n*(n+1)/2;
}
int main(){
 ll t;
 cin>>t;
 while(t--){
    ll n,m;
    cin>>n>>m;
    vector<pair<ll,ll>> v;
    for(int i=0;i<m;i++){
        int g,h;
        cin>>g>>h;
        v.push_back({min(g,h),max(g,h)});
    }
     sort(v.begin(), v.end());
     ll arr[n+1];

      for(int i=1;i<=n;i++){
        arr[i]=0;
     }
     for(int i =0 ;i<m;i++){
            if(arr[v[i].first]==0 && arr[v[i].second]==0){
        arr[v[i].first]=i+1;arr[v[i].second]=i+1;
            }else if(arr[v[i].first]==0){
               arr[v[i].first]=i+1;arr[v[i].second]=i+1;
            }else if(arr[v[i].second]==0){
               arr[v[i].second]=arr[v[i].first];
            }else{
               arr[v[i].second]=min(arr[v[i].first],arr[v[i].second]);
               arr[v[i].first]=min(arr[v[i].first],arr[v[i].second]);
            }
     }
     ll cur = 0;
     ll s = 1;
     ll sum = 0;

    for(int i=1;i<=n;i++){
            if(arr[i]==0){
                continue;
            }
        if(arr[i]>cur){
            cur = arr[i];
        }else{
            //cout<<s<<" "<<i<<endl;
            sum = sum + f(i-s);
            for(int j=s;j<=i;j++){
                   // cout<<arr[j]<<" "<<arr[i]<<endl;
                if(arr[i]==arr[j]){
                    s = j+1;
                    //cout<<s<<endl;
                    break;
                }
            }
        }
    }
 for(int i=1;i<=n;i++){
        //cout<<arr[i]<<endl;
     }
    sum = sum + f(n+1-s);
    cout<<sum<<endl;
 }
}
