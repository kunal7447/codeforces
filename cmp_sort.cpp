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
    int s = (n-1)/2;
    int e = s+1;
    ll d = arr[s]+arr[e];
   // cout<<s<<" "<<e<<endl;
    ll c =0;
    while(s>=0 && e<=n-1){
        if(d>=0){
               // cout<<arr[s]<<" "<<arr[e]<<" "<<s<<" "<<e<<"  these are pairs"<<endl;
                if(s-1>=0 && e+1<=n-1){
            d= arr[s-1]+arr[e+1];
                }else{
                c++;
                break;
                }
            //cout<<d<<endl;
            s--;
            e++;
            c++;
        }else{
            //  cout<<"i entered "<<s-1<<endl;
              if(s-1>=0 && e<=n-1){
            d= d+arr[s-1];
              }
            s--;

        }
    }
    cout<<c<<endl;
  }
}
