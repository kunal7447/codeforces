#include<bits/stdc++.h>
using namespace std;
#define ll long long
int p(pair<ll,ll> arr[],int m,int e){
    ll sum = 0;
    cout<<"? "<<e-m+1<<" ";
   for(int i=m;i<=e;i++){
    sum += arr[i].first;
    cout<<arr[i].second+1<<" ";
   }
   cout<<endl;
   cout<<flush;
   ll f;
   cin>>f;
   if(f!=sum){
    return 1;
   }else{
      return 0;
   }
   return 0;
}
int main(){
  int t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;
    pair<ll,ll> arr[n];
    for(int i=0;i<n;i++){
            int k ;
    cin>>k;
        arr[i].first=k;
        arr[i].second=i;
    }
    sort(arr,arr+n);
    int s = 0;
    int e = n-1;
    while(s<=e){
            if(s==e){
                cout<<"! "<<arr[s].second+1<<endl;
                cout<<flush;
                break;
            }
        int m = (s+e)/2;
        int d = p(arr,m+1,e);
        if(d==1){
            s = m+1;
        }else{
            e = m;
        }
    }
  }
}
