
// C++ program to prll all primes smaller than or equal to
// n using Sieve of Eratosthenes
#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool prime[101]={true};
struct suc{
  ll oio=0;
  ll ac=0;
};
void SieveOfEratosthenes(ll n,bool prime[])
{

	for (ll p = 2; p * p <= n; p++) {

		if (prime[p] == true) {
			for (ll i = p * p; i <= n; i += p)
				prime[i] = false;
		}
	}



}


int main()
{

	//SieveOfEratosthenes(100,prime);
	ll max1 = 1000000;
 bool prime[max1+1];
    memset(prime, true, sizeof(prime));

    for (ll p = 2; p * p <= max1; p++) {
        // If prime[p] is not changed, then it is a prime
        if (prime[p] == true) {
            // Update all multiples of p greater than or
            // equal to the square of it numbers which are
            // multiple of p and are less than p^2 are
            // already been marked.
            for (ll i = p * p; i <= max1; i += p)
                prime[i] = false;
        }
    }

	ll t;
	cin>>t;
	while(t--){
            ll n;
    ll e;
    cin>>n>>e;
    ll arr[n+1];
    ll f[n+1];
    //ll max1 = 0;
        for(ll i=1;i<=n;i++){
            cin>>arr[i];
//max1 = max(arr[i],max1);
        }





for(ll i=1;i<=n;i++){

        if(arr[i]==1){
                f[i]=1;
                //continue;
            }
            else if(prime[arr[i]]){
                f[i]=2;
            }else{
            f[i]=0;
            }
   // cout<<f[i]<<" ";
}
//cout<<endl;
        //

     suc dp[n+1];
     for(ll i=1;i<=n;i++){
        if(i-e>=1){
            if(f[i]==1){
                if(f[i-e]==1){
                    dp[i].ac = dp[i-e].ac;
                    dp[i].oio = dp[i-e].oio+1;
                }else if(f[i-e]==2){
                   dp[i].ac = dp[i-e].ac+1;
                    dp[i].oio = 0;
                }else{
                dp[i].ac = 0;
                    dp[i].oio = 0;
                }
            }else if(f[i]==2){
               if(f[i-e]==1){
                    dp[i].ac = dp[i-e].oio+1;
                    dp[i].oio = 0;
                }else if(f[i-e]==2){
                   dp[i].ac = 0;
                    dp[i].oio = 0;
                }else{
                dp[i].ac = 0;
                    dp[i].oio = 0;
                }
            }else{
              dp[i].ac = 0;
              dp[i].oio=0;
            }
        }
      //  cout<<dp[i].ac<<" "<<dp[i].oio<<" ";
     }
    // cout<<endl;
     ll sum = 0;
     for(ll i=1;i<=n;i++){
        sum = sum + dp[i].ac;
     }
     cout<<sum<<endl;
     }

	return 0;
}
