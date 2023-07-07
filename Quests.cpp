#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool ulta(ll a,ll b){
  return a>b;
}
bool f(ll arr[],ll mid,ll d,ll n,ll c){
    ll k = mid;
    ll sum = 0;

    for(int i=1;i<=min(mid+1,n);i++){
        sum += arr[i];
    }
    //cout<<sum<<endl;
   //cout<<d<<" "<<(mid+1)<<endl;
   sum = sum * (int)(d/(mid+1));


   ll jack = d%(mid+1);

   for(ll i = 1;i<=min(jack,n);i++){
      //  cout<<sum<<endl;
    sum = sum + arr[i];
  // cout<<sum<<endl;
   }

  return sum>=c;
}
int main(){
 ll t;
 cin>>t;
 while(t--){
    ll n,c,d;
    ll j = 0;
    cin>>n>>c>>d;
    ll arr[n+1]={0};
    for(int i=1;i<=n;i++){
        cin>>arr[i];

    }
    sort(arr+1,arr+n+1,ulta);
    for(int i=1;i<=n;i++){
       if(i<=d){
        j = j+ arr[i];
        }
    }
   // cout<<endl;
    ll s = 0;
    ll e = d+1;
    ll ans = 0;
    ll ch = 1;
    while(s<=e){
        ll mid = (s+e)/2;
        //cout<<s<<" "<<e<<" "<<mid<<endl;
        if(f(arr,mid,d,n,c)){
                ans = mid;
            s = mid+1;
           // cout<<s<<" "<<" iam s"<<endl;
            ch = 0;
        }else{
         e = mid-1;
        }
    }
    if(ch){
        cout<<"Impossible"<<endl;
        continue;
    }
    if(j>=c){
        cout<<"Infinity"<<endl;
        continue;
    }
    cout<<ans<<endl;
 }
}
