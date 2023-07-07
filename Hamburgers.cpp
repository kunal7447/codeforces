#include<bits/stdc++.h>
using namespace std;
#define ll long long
int f(ll b,ll s,ll c,ll p[],ll g[],ll r,ll m){
   ll br = m*b;
   if(p[1]>=br){

   }else{
     ll k = (br-p[1])*g[1];
     if(k<=r){
        r = r-k;
     }else{
     return 0;
     }
   }



   br = m*s;
   if(p[2]>=br){

   }else{
     ll k = (br-p[2])*g[2];
     if(k<=r){
        r = r-k;
     }else{
     return 0;
     }
   }


   br = m*c;
   if(p[3]>=br){

   }else{
     ll k = (br-p[3])*g[3];
     if(k<=r){
        r = r-k;
     }else{
     return 0;
     }
   }
   return 1;
}
int main(){
   ll t;
//   cin>>t;
 t = 1;
   while(t--){
    string h;
    cin>>h;
    ll p[3+1];
    ll g[3+1];
    ll b = 0;ll c = 0;ll s = 0;
    for(int i = 0;i<h.length();i++){
        if(h[i]=='B'){
            b++;
        }else if(h[i]=='S'){
        s++;
        }else{
          c++;
        }
    }
    for(int i=1;i<=3;i++){
        cin>>p[i];
    }
    for(int i=1;i<=3;i++){
        cin>>g[i];
    }
    ll r;
    cin>>r;
    ll e = r+100;
    ll s1 = 0;
    ll ans = 0;
    while(s1<=e){
            ll m = s1-(s1-e)/2;
        int o = f(b,s,c,p,g,r,m);

        if(o){
                ans = m;
            s1 = m+1;
        }else{
          e = m-1;
        }
    }
    cout<<ans<<endl;

   }

}
