#include<bits/stdc++.h>
using namespace std;
#define ll long long
int binary(int t,ll arr[],ll d,int i,ll n){
int s = i;
int e = n;
//cout<<endl<<s<<"  "<<e<<endl;
while(s<e){
        int mid = (s+e)/2;

        ll b = arr[mid]-d;


    if(b<=t){
        s = mid+1;
    }else{
       e = mid;
    }
}

if(arr[s]-d<=t){

    return n+1;
}else{
return s;
}
}
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll a[n+1];
        ll sum[n+1]={0};
        ll rem[n+1]={0};
        ll fre[n+1]={0};
        ll b[n+1]={0};
        for(int i=1;i<n+1;i++){
            cin>>a[i];
        }
        for(int i=1;i<n+1;i++){
            cin>>b[i];
            sum[i] = sum[i-1]+b[i];

        }
        for(int i=1;i<=n;i++){
           // cout<<sum[i]<<" ";
        }
        for(int i=1;i<=n;i++){
                ll o = sum[i-1];
            int j = binary(a[i],sum,o,i,n);
            //cout<<j<<endl;
            if(j!=n+1){
                    ll w=0;

                         w = sum[i-1];

                rem[j]=rem[j]+a[i]-sum[j-1]+w;
                //cout<<a[i]<<" "<<sum[j-1]<<endl;
                fre[j]++;
            }
        }

        ll k =0;
      //  cout<<"frequency is"<<endl;
        for(int i=1;i<=n;i++){
            //cout<<fre[i]<<" ";
        }
        for(int i=1;i<=n;i++){
                k = k+fre[i];
            cout<<((i-k)*b[i])+rem[i]<<" ";
        }
    }
    return 0;
}
