#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int arr[n];
    int p1=0;
    int n1 = 0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]==-1){
            n1++;
        }
    }
    p1 = n-n1;
    int c = 0;
    if(n1>p1){
       int d = (n1-p1+1)/2;
       n1 = n1 - d;
       c = d;
       // cout<<n1<<" "<<p1<<endl;
    }
    if(n1%2!=0){
        c++;
    }
    cout<<c<<endl;
  }
}
