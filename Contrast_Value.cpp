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
    int s = 2;
    ll sum = 0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++){
            if(arr[i]==arr[i+1]){
                sum++;
                continue;
            }
            if(s==0){
                if(arr[i]<arr[i+1]){
                    sum++;
                }else if(arr[i]>arr[i+1]){
                   s = 1;
                   continue;
                }
            }
            if(s==1){
                if(arr[i]>arr[i+1]){
                    sum++;
                }else if(arr[i]<arr[i+1]){
                   s = 0;
                   continue;
                }
            }

        if(arr[i]<arr[i+1]){
           s = 0;
        }else if(arr[i]>arr[i+1]){
           s = 1;
        }
    }

    cout<<n-sum<<endl;
  }
}
