#include<bits/stdc++.h>
using namespace std;
#define d double //double
int main(){
  d t=1;

  while(t--){
    int n;
    cin>>n;
    d l;
    cin>>l;
    d arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    d m = 0;
    m = max(m,arr[0]);
    m = max(m,l-arr[n-1]);
    for(int i=1;i<n;i++){

          cout<<setprecision(9);
          d k = (arr[i]-arr[i-1])/2;
           cout<<setprecision(9);
           m = max(m,k);

        //cout<<m<<endl;
    }
    cout<<setprecision(9);
    cout<<m<<endl;
  }
}
