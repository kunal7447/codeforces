#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
  ll n;
  cin>>n;
  ll arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  priority_queue<ll> q;
 // q.push(1000); q.push(10); q.push(1);
  ll life = 0;
  ll ans = 0;
  for(int i=0;i<n;i++){
    if(arr[i]>=0){
        life += arr[i];
        ans++;
    }else{
        if(life>=abs(arr[i])){
            life += arr[i];
            //cout<<life<<endl;
            ans++;
            q.push(abs(arr[i]));
            continue;
        }else if(q.size()!=0){
        if(abs(q.top())>abs(arr[i])){
           // cout<<q.top()<<endl;
                ll k = abs(q.top()) -abs(arr[i]);
            life +=  k;
            q.pop();
       // cout<<q.top()<<endl;
            q.push(abs(arr[i]));

        }
      }
    }

   // cout<<life<<" "<<endl;
  }

  //cout<<q.size()<<endl;
  cout<<ans<<endl;
}
