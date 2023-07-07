#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n,x;
    cin>>n>>x;
    vector<ll> v;
    vector<ll> f;
    ll arr[n+1]={0};
    ll s = x;
    if(x==n){
           cout<<s<<" ";
    for(int i=2;i<=n-1;i++){
        if(arr[i]==0){
            cout<<i<<" ";
        }
    }
    cout<<1<<endl;
    continue;
    }
   for(int i=1;i<=n;i++){
    if(n%i==0){
        v.push_back(i);
    }
   }
   int ch = 0;
   for(int i=0;i<v.size();i++){
    if(v[i]>x && v[i]%x==0){
        arr[x] = v[i];
        ch = 1;
        x = v[i];
    }
   }

   if(ch==1){
        cout<<s<<" ";
    for(int i=2;i<=n-1;i++){
        if(arr[i]==0){
            cout<<i<<" ";
        }else{
           cout<<arr[i]<<" ";
        }
    }
    cout<<1<<endl;
   }else{
   cout<<-1<<endl;
   }

  }
}
