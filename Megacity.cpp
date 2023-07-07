#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool ch(pair<pair<ll,ll>,ll> a,pair<pair<ll,ll>,ll> b){
   return a.first.first*a.first.first + a.first.second*a.first.second<b.first.first*b.first.first + b.first.second*b.first.second;
}
double squareRoot(int number, int precision)
{
    int start = 0, end = number;
    int mid;

    // variable to store the answer
    float ans;

    // for computing integral part
    // of square root of number
    while (start <= end) {
        mid = (start + end) / 2;
        if (mid * mid == number) {
            ans = mid;
            break;
        }

        // incrementing start if integral
        // part lies on right side of the mid
        if (mid * mid < number) {
            start = mid + 1;
            ans = mid;
        }

        // decrementing end if integral part
        // lies on the left side of the mid
        else {
            end = mid - 1;
        }
    }

    // For computing the fractional part
    // of square root upto given precision
    double increment = 0.1;
    for (int i = 0; i < precision; i++) {
        while (ans * ans <= number) {
            ans += increment;
        }

        // loop terminates when ans * ans > number
        ans = ans - increment;
        increment = increment / 10;
    }
    return ans;
}

ll bin(ll s,ll e,ll t,vector<pair<pair<ll,ll>,ll>> v){
    while(s<=e){
    ll m = e-(e-s)/2;
    if(t==v[m].second){
        return m;
    }else if(t>v[m].second){
      s = m+1;
    }else{
    e = m-1;
    }
  }
  return s;
}
int main(){
  ll n,p;
  cin>>n>>p;
  vector<pair<pair<ll,ll>,ll>> v(n);
  for(int i=0;i<n;i++){
    cin>>v[i].first.first>>v[i].first.second>>v[i].second;
  }

  sort(v.begin(),v.end(),ch);
   for(int i=1;i<n;i++){
    v[i].second = v[i].second+v[i-1].second;
  }
  ll t = 1000000-p;
  for(int i=0;i<n;i++){
   // cin>>v[i].first.first*v[i].first.second<<" "<<v[i].second<<endl;
  }
  ll s =0; ll e = n-1;
  ll r = bin(s,e,t,v);
  if(r==n){
    cout<<-1<<endl;
    return 0;
  }
   ll a = v[r].first.first*v[r].first.first + v[r].first.second*v[r].first.second;
   double dis=sqrt(a*1.0);
   printf("%.7lf\n", dis);
   //cout<<a<<" "<<r<<endl;
}
