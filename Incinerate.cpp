#include<bits/stdc++.h>
using namespace std;

bool ch(pair<long long,long long> a,pair<long long,long long> b){
  return a.first<b.first;
}
long long binary(long long s,long long e,vector<pair<long long,long long>> v,long long k,long long d){
long long ans = s-1;
while(s<=e){
    long long mid = e-(e-s)/2;
    if(v[mid].first-d<=k){
        ans = mid;
        s = mid+1;
    }else{
      e = mid-1;
    }
}
return ans;
}
int main(){
    long long t ;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        long long h[n];
        long long p[n];
        map<long long,long long> m;
        //vector<pair<long long,long long>> vp(n);
        vector<pair<long long,long long>> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i].first;
        }
         for(int i=0;i<n;i++){
            cin>>v[i].second;
        }
        sort(v.begin(),v.end(),ch);
       // sort(p,p+n);
      // vp[n-1].first=v[i].second;
        for(int i=n-2;i>=0;i--){
            long j = min(v[i].second,v[i+1].second);
            v[i].second = j;
        }
        //sort(vp.begin(),vp.end(),ch);
        long long d =0;
        long long s = 0;
        long long e = n-1;
        long long pc = 0;
        int g = 1;
         //= cout<<endl;
        //for(int i=s;i<n;i++){
         //   cout<<vp[i].first-d<<" ";
       // }
       // cout<<endl;
       // for(int i=s;i<n;i++){
          //  cout<<vp[i].second-d<<" ";
       // }
        //cout<<endl;
        // cout<<endl;
       // for(int i=s;i<n;i++){
           // cout<<v[i].first-d<<" ";
       // }
       // cout<<endl;
      //  for(int i=s;i<n;i++){
         //   cout<<v[i].second-d<<" ";
       // }
       // cout<<endl;
        while(s<n && k>0){

           while(s<n && v[s].first-d<=k){
            s++;
           }
           d = d+k;
           k = k-v[s].second;
           if(s==n){
            g = 0;
            break;
           }
        }
        if(g==0){
            cout<<"YES"<<endl;
        }else{
           cout<<"NO"<<endl;
        }
    }
return 0;
}
