#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
 ll t;
 ll n;
 cin>>t;
 while(t--){
    cin>>n;

    if(n%2==0){
        cout<<n/2<<" "<<n/2<<endl;
    }else{
        ll k = 1;
        for(int i=2;i<=sqrt(n);i++){


            if(n%i==0){

                 if(k<n/i){
                k = n/i;
                 }
            }
        }
        if(k==1){
            cout<<1<<" "<<n-1<<endl;
            continue;
        }
        ll j = n/k;
        int e = j-1;
        int s = 1;
        int x =0;
        int y =0;
        while(s<=e){
            if(e%s==0){
                x = s;
                y = e;
            }
            s++;
            e--;
        }
        cout<<x*k<<" "<<y*k<<endl;

    }
 }

return 0;
}

