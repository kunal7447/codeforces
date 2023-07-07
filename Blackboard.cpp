#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
   int t;
   cin>>t;
   while(t--){
    ll n;
    cin>>n;
    ll arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ch = 1;
     for(int i=0;i<n;i++){
        if(arr[i]<0){
            cout<<arr[i]<<endl;
            ch = 0;
            break;
        }
     }
     ll m = 0;
     if(ch==1){
        for(int i=0;i<n;i++){
            m = max(arr[i],m);
        }
        cout<<m<<endl;
     }
   }
   return 0;
}
