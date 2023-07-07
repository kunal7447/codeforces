#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> pos(n + 1);
    for (int i = 0; i < n; ++i) {
      int x;
      cin >> x;
      pos[x] = i;
    }
    int l[n+1] ={0};
    l[n]=1;
    for(int i= n-1;i>=1;i--){
        if(pos[i]<pos[i+1]){
            l[i] = l[i+1]+1;
        }else{
        l[i]=1;
        }
    }
    int k = n/2;
    if(n%2==0){
        k++;
    }
    for(int i=1;i<=n;i++){
      //  cout<<l[i]<<" ";
    }
    //cout<<endl;
    for(int i=0;i<=k;i++){
        if(n-(i)*2<=l[i+1]){
            cout<<i<<endl;
            break;
        }
    }
  }
}
