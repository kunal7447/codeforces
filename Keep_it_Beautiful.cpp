#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;
    vector<ll> v;
    ll g;
    cin>>g;
    v.push_back(g);
    cout<<"1";
    ll ch = 1;
    ll l;
    for(int i=0;i<n-1;i++){
       ll k;
       cin>>k;

       if(ch){
        if(k>=v[v.size()-1]){
                v.push_back(k);
            cout<<"1";
        }else if(k<=v[0]){
             v.push_back(k);
           cout<<"1";
           l = k;
           ch = 0;
        }else{
        cout<<"0";
        }
       }else{
         if(k>=l && k<=v[0]){
                 v.push_back(k);
            cout<<"1";
            l=k;
         }else{
         cout<<"0";
         }
       }

    }
    cout<<endl;
  }
}
