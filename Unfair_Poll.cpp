#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool check(ll n,ll m,ll mid, ll k){
  ll total = ((n-1)*m*2+m)*mid;
  return  k>=total;
}
int main(){
  ll n,m,k,x,y;
  cin>>n>>m>>k>>x>>y;
  ll s = 0;
  ll e = k+1;
  ll ans = 0;
  while(s<=e){
    ll mid = s-(s-e)/2;
    //cout<<mid<<endl;
    if(check(n,m,mid,k)){
            ans = mid;
        s = mid+1;
    }else{
       e = mid-1;
    }
  }
 // cout<<"dsfdfsd"<<endl;
  k = k - ((n-1)*m*2 + m)*ans;
  ll arr[n+1][m+1];
  for(int i=1;i<=n;i++){
    for(int j= 1;j<=m;j++){
        arr[i][j] = 0;
    }
  }


   for(int i=1;i<=n;i++){
    for(int j= 1;j<=m;j++){
            if(k==0){
                break;
            }
        arr[i][j]++;
        k--;
    }
  }
  for(int i=n-1;i>=1;i--){
    for(int j = 1;j<=m;j++){
              if(k==0){
                break;
            }
        arr[i][j]++;
        k--;
    }
  }
  if(x!=n){
    k = arr[x][y]+ans*2;
  }else{
    k = arr[x][y]+ans;
  }
  //cout<<ans<<endl;
   for(int i=1;i<=n;i++){
     for(int j= 1;j<=m;j++){
        //cout<<arr[i][j]<<" ";
     }
     //cout<<endl;
   }
  if(n==1){//arr[n][m] + ans
    cout<<max(arr[1][1],arr[1][1]+ans)<<" "<<arr[n][m] + ans<<" "<<k;
    return 0;
  }
  cout<<max(arr[n-1][1]+ans*2,arr[1][1]+ans*2)<<" "<<arr[n][m] + ans<<" "<<k;
}
