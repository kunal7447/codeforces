#include<bits/stdc++.h>
using namespace std;
int main(){
   int n,m,d;
   cin>>n>>m>>d;
   int arr[n*m];
;   for(int i=0;i<n*m;i++){
    cin>>arr[i];
   }
   int r = arr[0]%d;
  int c = 0;
   for(int i=0;i<n*m;i++){
    if(arr[i]%d!=r){
        cout<<-1<<endl;
        c = 1;
        break;
    }
   }
   if(c==0){
        sort(arr,arr+n*m);
        int s = (n*m)/2;
        int w = arr[s];
        long long sum =0;
    for(int i=0;i<n*m;i++){
        sum = sum + abs(w-arr[i])/d;
    }
    cout<<sum<<endl;
   }
return 0;
}
