#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    string h;
    cin>>h;
    for(int i=0;i<n;i++){
            cout<<h[i];
            int j=i+1;
        for(j=i+1;j<n;j++){
            if(h[j]==h[i]){
                break;
            }
        }
        i=j;
    }
    cout<<endl;
  }
}
