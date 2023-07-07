#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
  int t;
  cin>>t;
  while(t--){
    ll n,k;
    cin>>n>>k;
    ll j = 0;
     ll c = 0;
    ll h = n+1;
    while(h>0){
            c++;
        h = h/2;
    }
c= c-1;
    if(c>=k){
        cout<<(int)pow(2,k)<<endl;
    }else{
        cout<<n+1<<endl;
    }

  }
}
