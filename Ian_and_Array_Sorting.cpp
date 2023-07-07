#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;
    ll arr[n+2];
    ll arrq[n+2];
    for(int i=1;i<=n;i++){
        cin>>arr[i];
        arrq[i] = arr[i];
    }
    if(n%2!=0){
      //  cout<<"YES"<<endl;
       // continue;
    }

    for(int i=2;i<=n-1;i++){
        if(arr[i]<arr[i-1]){
            arr[i+1] += arr[i-1]-arr[i];
            arr[i] = arr[i-1];
        }
    }

    for(int i=n-1;i>=2;i--){
        if (arr[i]>arr[i+1]){
            // cout << a[i-1] << endl;
            arr[i-1]-=(arr[i]-arr[i+1]);
            arr[i]=arr[i+1];
            // cout << a[i-1] << endl;
        }
    }
    int ch = 1;
    for(int i=1;i<n;i++){
        if(arr[i]<=arr[i+1]){

        }else{
          ch = 0;
        }
    }

     if(ch){
        cout<<"YES"<<endl;
        continue;
     }else{
    cout<<"NO"<<endl;
     }


  }
}
