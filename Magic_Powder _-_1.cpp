#include<bits/stdc++.h>
using namespace std;
#define ll long long

int f(ll m,ll k,ll p[],ll arr[],ll n){
  for(int i=0;i<n;i++){
    ll j = p[i]*m;
    if(arr[i]>=j){

    }else{
      ll h = j-arr[i];
      if(k>=h){
        k = k-h;
      }else{
       return 0;
      }
    }
  }
  return 1;
}

int main(){
 ll n,k;
 cin>>n>>k;
 ll arr[n];
 ll p[n];
 ll e = 0;
 for(int i=0;i<n;i++){
    cin>>p[i];
 }
 for(int i=0;i<n;i++){
    cin>>arr[i];
    e += arr[i];
 }
 e = e/n;
 e++;
 e = e+k;

 ll s = 0;
 ll a = 0;
 while(s<=e){
    ll m = s-(s-e)/2;

    ll o = f( m, k, p, arr, n);

    if(o){
            a = m;
        s = m+1;
    }else{
      e = m-1;
    }

 }
 cout<<a<<endl;


}
