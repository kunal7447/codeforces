#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
ll t;
cin>>t;
while(t--){
    ll n;
    cin>>n;
    ll a[n];
    ll b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    ll fa[2*n + 2]={0};
    ll fb[2*n + 2]={0};
    ll f[2*n + 2]={0};
    ll c = 0;
     fa[a[0]]++; fb[b[0]]++;
    for(int i=1;i<n;i++){
        if(a[i]==a[i-1]){
            c++;
        }else{
          c=0;
        }
        if(fa[a[i]]<c+1){
            fa[a[i]]=c+1;
        }
    }
    c=0;
    for(int i=1;i<n;i++){
        if(b[i]==b[i-1]){
            c++;
        }else{
          c=0;
        }
        if(fb[b[i]]<c+1){
            fb[b[i]]=c+1;
        }
    }
    for(int i=0;i<=2*n +1;i++){
        f[i]=fa[i]+fb[i];
    }
    ll max = -1000;

    for(int i=0;i<=2*n +1;i++){
        if(f[i]>max){
            max = f[i];
        }
    }
    cout<<max<<endl;
}

}
