#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
ll t;
cin>>t;
while(t--){

    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    ll s = a;
    ll s1 = a;
    if(s>0){
    ll k = min(b,c);
    s = s + 2*k;
    if(s1>=max(b,c)-min(b,c)){
        s = s + max(b,c)-min(b,c);
        s1 = s1-max(b,c)+min(b,c);
        if(s1>=d){
            s=s+d;

        }else{
           s = s1+1+s;
        }
    }else{
      s = s+s1+1;
    }
    }else{
      s =1;
    }
    cout<<s<<endl;
}
return 0;
}
