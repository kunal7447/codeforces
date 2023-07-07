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
    if(n>1){
        if(arr[0]==1){
            if(arr[1]%2!=0){
                arr[0]++;
            }else{
               arr[1]++;
               arr[0]++;
            }

        }
    }
    for(int i=1;i<n;i++){
            if(arr[i]==1){
                if(arr[i-1]==2){
                    arr[i]++;
                }
                arr[i]++;
            }
        if(arr[i]%arr[i-1]==0){
            arr[i]++;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

  }
}
