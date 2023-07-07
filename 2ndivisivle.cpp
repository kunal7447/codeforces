#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll arr[n+1];
        for(int i=1;i<=n;i++){
            cin>>arr[i];
        }
        ll count = 0;
        ll m[n+1];
        for(int i=1;i<=n;i++){
                ll g = arr[i];
            while(g%2==0){
                g = g/2;
                count++;
            }
            ll j = i;
            ll c = 0;
            while(j%2==0){
                j=j/2;
                c++;
            }
            m[i]=c;

        }
        m[0]=-1;
        sort(m,m+n+1);
       // cout<<endl;

        if(n>count){
            ll k = log2(n);
        //    cout<<k<<" "<<count<<endl;
            ll ch = 1;
            ll m1 = 0;
            for(int i=n;i>=1;i--){
                    m1++;
                count = count +m[i];
             //   cout<<count<<endl;
                if(count>=n){
                    cout<<m1<<endl;
                    ch = 0;
                    break;
                }
            }
            if(ch==1){
                cout<<-1<<endl;
            }
        }else{
           cout<<0<<endl;
        }
    }
return 0;
}
