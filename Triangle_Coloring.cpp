#include<bits/stdc++.h>
using namespace std;
#define ll long long
// Returns factorial of n
ll fact(int n)
{
      if(n==0)
      return 1;
    ll res = 1;
    for (int i = 2; i <= n; i++)
        res = (res * i)%998244353;
    return res;
}
ll nCr(ll n, ll r)
{
    return (fact(n) / (fact(r) * fact(n - r)))%998244353;
}

int main(){
    ll n;
    cin>>n;
    ll arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    ll a = 1;
    for(int i=0;i<n;i=i+3){
        sort(arr+i,arr+i+3);
        if(arr[i]==arr[i+2]){
            a = a*3;
        }else if(arr[i]==arr[i+1]){
            a = a*2;
        }
        a = a%998244353;
    }
    cout<<(nCr(n/3,n/6)*a)%998244353<<endl;
return 0;
}
