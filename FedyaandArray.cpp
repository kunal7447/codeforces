#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
ll t;
cin>>t;
while(t--){
    ll x,y;
    cin>>x>>y;
    cout<<2*(x-y)<<endl;
    for(ll i=y;i<=x;i++){
        cout<<i<<" ";
    }
    for(ll i=x-1;i>y;i--){
        cout<<i<<" ";
    }
    cout<<endl;
}
}
