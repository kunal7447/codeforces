#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;
    ll arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    ll dp[n]={0};
     dp[0]=1;
    sort(arr,arr+n);
    int ch=1;
    ll s=0;
    if(arr[0]==1){
        for(int i=1;i<n;i++){
            if(dp[i-1]>=arr[i]){
                dp[i]=dp[i-1]+arr[i];
            }else{
                ch = 0;
               cout<<"NO"<<endl;
               break;
            }
        }
    }else{
    ch = 0;
               cout<<"NO"<<endl;
    }
    if(ch==1){
        cout<<"YES"<<endl;
    }
  }
}
