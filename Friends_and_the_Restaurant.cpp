#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool cmp(pair<ll,ll> a,pair<ll,ll> b){
    return (a.first-a.second)<(b.first-b.second);
}
int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;
    vector<pair<ll,ll>> v;
    for(int i=0;i<n;i++){
        int h;
        cin>>h;
        v.push_back({0,0});
        v[i].first=h;
    }
    for(int i=0;i<n;i++){
        int h;
        cin>>h;
     //   v.push_back();
        v[i].second=h;
    }
    sort(v.begin(),v.end(),cmp);
    ll arr[n];
    for(int i=0;i<n;i++){
        arr[i]=v[i].second-v[i].first;
    }
    for(int i=0;i<n;i++){
       // cout<<arr[i]<<" ";
    }
    //cout<<endl;
    for(int i=0;i<n;i++){
        //cout<<v[i].second<<" ";
    }
    int s = 0;
    int e = n-1;
    ll d = arr[s]+arr[e];
   // cout<<s<<" "<<e<<endl;
    ll c =0;
    while(s<e){
        if(arr[s]+arr[e]>=0){
                c++;

             s++;
             e--;
        }else{
            e--;

        }
    }
    cout<<c<<endl;
  }
}
