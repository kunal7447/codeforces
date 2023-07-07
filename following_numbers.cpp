#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        string h;
        cin>>h;
        ll x = 0;
        ll y = 0;
        int p = 0;
        for(int i=0;i<n;i++){
            if(h[i]=='L'){
                x--;
            }else if(h[i]=='R'){
               x++;
            }else if(h[i]=='U'){
               y++;
            }else{
                y--;
             }
             if(x==1 && y==1){
                 p =1;
                 break;
             }
        }
        if(p==1){
            cout<<"YES"<<endl;
        }else{
             cout<<"NO"<<endl;
        }
    }
return 0;
}
