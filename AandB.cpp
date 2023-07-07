#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
ll t;
cin>>t;
while(t--){
    ll a,b;
    cin>>a>>b;
    if(a==b){
        cout<<0<<endl;
        continue;
    }
    ll s = 0;
    for(int i=1;i<=100001;i++){

        s = 0;
         s = (i*(i+1))/2;
        s = s + a+b;
        if(s%2==0){
            if(s/2>=max(a,b)){
                cout<<i<<endl;
                break;
            }
        }
   // cout<<s<<endl;
    }
}
}
