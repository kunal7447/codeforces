#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
int t;
cin>>t;
ll n,m;
n = 1000000;
bool prime[n + 1];
    memset(prime, true, sizeof(prime));

    for (int p = 2; p * p <= n; p++) {
        // If prime[p] is not changed, then it is a prime
        if (prime[p] == true) {
            // Update all multiples of p greater than or
            // equal to the square of it numbers which are
            // multiple of p and are less than p^2 are
            // already been marked.
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
while(t--){

    cin>>n>>m;
    ll f = n*m;

    if(prime[n]==false){
            for(int i=1;i<=n;i++){
                for(int j=i;j<=n*m;j=j+n){
                    cout<<j<<" ";
                }
                cout<<endl;
            }
            cout<<endl;
            continue;
        }
        if(prime[m]==false){
                ll l=1;
            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    cout<<l<<" ";
                    l++;
                }
                cout<<endl;
            }
            cout<<endl;
        continue;
        }
    for(int i=1;i<=n;i++){
            int j = m;
            ll k = i;
        ll b = (m/2) +1;

        while(b--){
                if(k>f){
                    //cout<<k<<endl;
                break;
            }
            cout<<k<<" ";
            k = k+2*n;
            if(k>n*m){
                break;
            }
        }
        k = i+n;
        while(1){
            if(k>n*m){
                break;
            }
            cout<<k<<" ";
            k = k+2*n;
            if(k<=i){
                break;
            }
        }
        cout<<endl;
    }
    cout<<endl;
}
}
