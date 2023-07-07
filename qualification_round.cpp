#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,k;
  cin>>n>>k;
  int arr[16]={0};

  for(int i=0;i<n;i++){
        int s = 0;
    for(int j=0;j<k;j++){
            int a;
    cin>>a;
        s += a<<j;
    }
    arr[s]++;
  }
  int ch = 0;
  for(int i=0;i<16;i++){
    //cout<<arr[i]<<" ";
  }
 // cout<<endl;
  for(int i=0;i<16;i++){
    if(arr[i]>0){
        for(int j=0;j<16;j++){

            if(arr[j]>0){
                    int k = i&j;
              //  cout<<i<<" "<<j<<" "<<k<<endl;
                if(k==0){
                    ch=1;
                  // cout<<i<<" "<<j<<endl;
                }
            }
        }
    }
  }
  if(ch){
    cout<<"YES"<<endl;
  }else{
    cout<<"NO"<<endl;
  }
}
