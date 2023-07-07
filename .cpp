#include<bits/stdc++.h>
using namespace std;
int main(){
 int t;
 cin>>t;
 while(t--){
        int n;
 cin>>n;
 int arr[n];
 for(int i=0;i<n;i++){
    cin>>arr[i];

 }

 if(arr[n-1]==1){
    cout<<"NO"<<endl;
    continue;
 }else{
     cout<<"YES"<<endl;
    for(int i=n-1;i>=0;i--){
            int o = 0;
            int h = 0;
    int j = i;
        for( j = i;j>=0;j--){
            if(arr[j]==0){
                o++;
            }else{
            break;
            }
        }
        int k = j;
        for(k = j;k>=0;k--){
            if(arr[k]==1){
                h++;
            }else{
            break;
            }
        }
        for(int f = 0;f<o+h-1;f++){
            cout<<0<<" ";
        }
        cout<<h<<" ";
        i = k+1;
    }
    cout<<endl;
 }
 }
}
