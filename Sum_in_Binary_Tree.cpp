#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll t;
    cin>>t;
    while(t--){
  ll n;
  cin>>n;
  ll sum = 0;
  while(n!=0){
    sum = sum + n;
    n = n/2;
  }
  cout<<sum<<endl;
    }
}
