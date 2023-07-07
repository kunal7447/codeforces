#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
   ll n,k;
   cin>>n>>k;
   ll arr[n+1];
   for(int i=1;i<=n;i++){
    cin>>arr[i];
   }
   sort(arr+1,arr+n+1);
   int j = (n+1)/2;
   for(int i=((n+1)/2)+1;i<=n;i++){
    if((arr[i]-arr[j])*(i-j)<=k){
        k = k-((arr[i]-arr[j])*(i-j));
        arr[j] = arr[i];
    }else{
    ll g = k/(i-j);
    arr[j] += g;
       k = 0;
   break;
    }
   }
  // cout<<k<<endl;
   arr[j] += k/(n-j+1);
   cout<<arr[j]<<endl;

}
