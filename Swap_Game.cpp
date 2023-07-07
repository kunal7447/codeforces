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
        sort(arr+1,arr+n);
        if(arr[0]<=arr[1]){
            cout<<"Bob"<<endl;
        }else{
        cout<<"Alice"<<endl;
        }
    }
return 0;
}
