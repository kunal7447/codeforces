#include<bits/stdc++.h>
using namespace std;

int main(){
 int t;
   cin>>t;
   while(t--){
    int n;
    cin>>n;
    int arr[n];
    map<int,int> m;
    m[-1]=100000;
    int max1 = 0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        max1 = max(max1,arr[i]);
    }int ch = 1;
    int f[101]={0};
    for(int i=0;i<n;i++){
       f[arr[i]]++;
    }
    for(int i=1;i<=max1;i++){
        if(f[i]<=f[i-1]){

        }else{
          ch = 0;
          break;
        }
    }
    if(ch){
        cout<<"YES"<<endl;
    }else{
      cout<<"NO"<<endl;
    }
   }
}
