#include<bits/stdc++.h>
using namespace std;
#define ll long long
int f(int s,int e,ll t,ll arr[]){
    ll n = e;
    ll ans = 0;
    int ch = 0;
   while(s<=e){
    int m = (s+e)/2;
    if(arr[m]==t){
            ch++;
        ans = m;
        e = m-1;
    }else if(arr[m]<t){
       s = m+1;
    }else{
       e = m-1;
    }
   }
   if(ch){
    return n-ans+1;
   }
   return n-s+1;
}
int main(){
  int n;
  cin>>n;
  ll a[n+1];
  ll b[n+1];
  ll arr[n+1];
  for(int i=1;i<=n;i++){
    cin>>a[i];
  }

  for(int i=1;i<=n;i++){
    cin>>b[i];
  }

  for(int i=1;i<=n;i++){
    arr[i] = a[i]-b[i];
  }
  ll sum = 0;
  sort(arr+1,arr+n+1);
  for(int i=1;i<=n;i++){
        ll t = -arr[i]+1;
    sum += f(i+1,n,t,arr);
  }
  cout<<sum<<endl;

}
