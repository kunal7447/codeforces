#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
ll t;
cin>>t;
while(t--){
  ll n;
  cin>>n;
  ll arr[n];
  ll e = 0;
  for(int i=0;i<n;i++){
  cin>>arr[i];
  if(arr[i]<0){
    e++;
  }
  if(arr[i]<0){
    arr[i]=-arr[i];
  }
  }
  ll sum = 0;
  if(e%2==0){
    for(int i=0;i<n;i++){
  if(arr[i]<0){
    arr[i]=-arr[i];
  }
  sum = sum +arr[i];
  }
  }else{
   sort(arr,arr+n);
   for(int i=0;i<n;i++){
  if(arr[i]<0){
    arr[i]=-arr[i];
  }
  sum = sum +arr[i];
  //cout<<sum<<endl;
  }
  sum = sum-2*arr[0];
  }
  cout<<sum<<endl;
}
return 0;
}
