#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  string h;
  cin>>h;
  vector<int> arr;
  vector<int> a;
  vector<int> g;
  for(int i=0;i<n;i++){
    arr.push_back(1);
    a.push_back(0);
    g.push_back(0);
  }

  for(int i=1;i<n;i++){
    if(h[i-1]=='='){
        arr[i]=max(arr[i],arr[i-1]);
        arr[i-1]=max(arr[i],arr[i-1]);
    }else if(h[i-1]=='R'){
       if(arr[i]==arr[i-1]){
        arr[i]++;
        continue;
       }else if(arr[i]<arr[i-1]){
          arr[i]=arr[i-1]+1;
       }
    }else{

       for(int j = i;j>=1;j--){
        if(h[j-1]=='L'){
            arr[j-1]=max(arr[j]+1,arr[j-1]);
        }else if(h[j-1]=='='){
            arr[j-1] = arr[j];
        }else{
          break;
        }
       }
    }
  }

  for(int i=0;i<n;i++){
  cout<<arr[i]<<" ";
  }
  h.clear();
  arr.clear();
  g.clear();
  a.clear();
  return 0;
}
