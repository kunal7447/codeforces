#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
 ll t;
 cin>>t;
 while(t--){
    ll n,m,k;
    cin>>n>>m>>k;
    ll rem = n%k;
    ll maxi = n/k;
    int ch = 1;
    for(int i=0;i<m;i++){
            ll g;
      cin>>g;
    //cout<< maxi <<" "<<rem<<endl;
      if(ch==0){
        continue;
      }
      if(g<=maxi){

      } else{
        if(g-1== maxi && rem>0){
            rem--;
        }else{
         ch = 0;
        }
      }
    }
    if(ch){
        cout<<"YES"<<endl;
    }else{
     cout<<"NO"<<endl;
    }
 }
}
