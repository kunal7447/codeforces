#include <iostream>
using namespace std;

#define ll long long

int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n, x;
        cin >> n >> x;
        ll xor_val = n & x;
        //cout<<n*2<<endl;
        if (n== x) {
            cout << n << endl;
            continue;
        }
        if(n==0){

        }
        ll z = 1;
        ll ch = 0;
        ll sum = 0;
        for (int i = 0; i < 64; i++) {
           //     cout<<" i "<<i<<endl;
          if(z&n==0 && z&x>0){
            break;
          }
            if ((z & n) >0) {
                    sum = sum + z;
        ll k = sum^n;
                if(k==x){
                    z = z<<1;
                    ll k = n^sum;
                   // cout<<k<<" "<<x<<endl;
                    k = n&z;
                   // cout<<k<<endl;
            if(k==0){
                ch = 1;
                ll j = n;

                n = n-sum+z;
                j = j&n;
                //cout<<"dcsds"<<endl;
                cout<<n<<endl;
               // cout<<j<<endl;
                break;
            }else{
              break;
            }
                }

            }

           // cout<<sum<<endl;

            z = z << 1;
        }
        if(ch==0){
            cout<<-1<<endl;
        }

    }
    return 0;
}
