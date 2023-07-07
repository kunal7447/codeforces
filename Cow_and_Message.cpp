#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool f(ll a,ll b){
  return a>b;
}
int main(){
  string h;
  cin>>h;
  vector<ll> a(26,0);
  for(int i=0;i<h.length();i++){
    a[h[i]-97]++;
  }
  sort(a.begin(),a.end(),f);
  if(a[1]==0){
    a[1]=1;
  }
  cout<<a[0]*a[1]<<endl;
}
