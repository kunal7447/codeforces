#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
  ll t;
  cin>>t;
  while(t--){
    ll a,b;
    cin>>a>>b;
    ll p = 1;
    ll ac = 0;
    ll bc = 0;
    for(int i=0;i<10;i++){
        ac = ac + (a/p);
        p = p*10;
    }
    p = 1;
    for(int i=0;i<10;i++){
        bc = bc + (b/p);
        p = p*10;
    }
    cout<<bc-ac<<endl;
  }
}
