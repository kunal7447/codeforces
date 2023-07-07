#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

int    s = 0;
   int  e = n-1;
    sort(arr,arr+n);
    for(int i=0;i<k;i++){

        if(arr[s]+arr[s+1]>=arr[e]){
            e--;
        }else{
          s= s+2;
        }

    }
    int sum = 0;
    for(int i=s;i<=e;i++){
         sum = sum + arr[i];
    }
    long long sum1=0;
    for(int i=0;i<)
    cout<<sum<<endl;

  }
}
