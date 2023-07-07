#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
ll t;
cin>>t;
while(t--){
    ll n;
    cin>>n;
    if(n%2==0){
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
        ll arr[n+1][2];
        ll k = n;
        ll l = k+2;
        ll h = n/2;
        for(int i=h;i>0;i--){
            cout<<i<<" "<<l<<endl;
            l= l+2;
        }
        cout<<k<<" "<<k+1<<endl;
        ll b = k-1;
        for(int i=k+2+1;i<=n*2;i=i+2){
            cout<<b<<" "<<i<<endl;
            b--;
        }
    }
}
return 0;
}
