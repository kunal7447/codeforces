#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    ll arr[n+1];
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    ll sum = 0;
    int ch = 0;
    ll w = 0;
    for(int i=1;i<=n;i++){
            w = w+ abs(arr[i]);
        if(arr[i]<0){
            if(ch==0){
                sum++;
                ch = 1;
            }

        }else if(arr[i]>0){
        ch = 0;
        }
    }
    cout<<w<<" "<<sum<<endl;
  }
}
