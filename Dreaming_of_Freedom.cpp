#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
        int n,m;
  cin>>n;
  cin>>m;
  if(n==1){
    cout<<"YES"<<endl;
    continue;
  }
  if(m>=n){
    cout<<"NO"<<endl;
    continue;
  }
  int pre = m;
  int ch=1;
  for(int i= 2;i<=sqrt(n);i++){
    if(n%i==0){
        n=n/i;
        if(m>=i){
            ch = 0;
        }
    }
  }
  if(n>2){
    if(m>=n){
        ch = 0;
    }
  }
  if(ch)
    cout<<"YES"<<endl;
  else
    cout<<"NO"<<endl;

  }

}
