#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll t;
    cin>>t;

    while(t--){
            int ch = 0;
        ll n,x,p;
        cin>>n>>x>>p;
        ll j = n;
        if(x==0){
            j = 0;
        }
        for(ll i=1;i<=min(2*n,p);i++){
            ll k = i*(i+1)/2;
            ll h = k;

             h = k%n;

            if(x+h==j){
                cout<<"Yes"<<endl;
                ch = 1;
                break;
            }
        }
        if(ch==0){
        cout<<"No"<<endl;
    }
    }

}
