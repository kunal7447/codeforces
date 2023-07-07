#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n,k;
    cin>>n>>k;
    int nn = n*(n+1)/2 - k;
    int arr[n+1];
    for(int i=0;i<=n;i++){
        arr[i]=1;
    }
    int h = n;
    while(nn!=0){
       //     cout<<n<<endl;
        if(nn>=h){
            arr[h] = -arr[h];
            nn = nn - h;
            h--;
        }
        if(nn< h){
            arr[nn] = -arr[nn];
            nn = 0;
        }
    }
    //int sum = 1;
    int show[n+1]={0};
    int sum = arr[1];
    cout<<arr[1]<<" ";
    for(int i=2;i<=n;i++){
        if(arr[i]>0){
            if(arr[i-1]>0){
                arr[i] = arr[i-1];
                sum = sum + arr[i];
            }else{
               arr[i] = 1-sum;
               sum = arr[i];
            }
        }else{
          if(arr[i-1]<0){
            arr[i] = arr[i-1];
            sum = sum + arr[i];
          }else{
            arr[i] = -sum -1;
            sum = arr[i];
          }
        }
        cout<<arr[i]<<" ";
    }
    cout<<endl;
  }
}
