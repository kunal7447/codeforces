#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
  int arr[n+1];
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    int s = 1;
    int e = n;
    sort(arr+1,arr+1+n);
    int sum = 0;
    while(s<e){
        sum = sum + arr[e] - arr[s];
        s++;
        e--;
    }
    cout<<sum<<endl;
  }

}
