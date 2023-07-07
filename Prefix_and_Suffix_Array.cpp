#include<bits/stdc++.h>
using namespace std;
bool check(string h){
  int s = 0;
  int e = h.length()-1;
  while(s<e){
    if(h[s]==h[e]){

    }else{
       return false;
    }
    s++;
    e--;
  }
  return true;
}
int main(){
   int t;
   cin>>t;
   while(t--){
    int n;
    cin>>n;
    string arr[2*n-2];
     int l = 2*n-2;
    for(int i=0;i<l;i++){
        cin>>arr[i];
    }

    int size = 0;
    size = n/2;
    if(n%2!=0){
        size++;
    }
    string h = "";
    for(int i=0;i<l;i++){
        if(arr[i].length()==size){
            h += arr[i];
        }
    }
    if(check(h)){
        cout<<"YES"<<endl;
    }else{
      cout<<"NO"<<endl;
    }
   }
}
