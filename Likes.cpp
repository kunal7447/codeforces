#include<bits/stdc++.h>
using namespace std;
int main(){
 int t;
 cin>>t;
 while(t--){
    int n;
    cin>>n;
    int arr[n];
    int p = 0;
    int n1 = 0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]>0){
            p++;
        }else{
         n1++;
        }
    }
    int p1= p;
    int n11 = n1;
    int v = 0;
    for(int i=0;i<n;i++){
        if(p1>0){
                v++;
            cout<<v<<" ";
            p1--;
        }else{
          v--;
          cout<<v<<" ";

        }
    }
    cout<<endl;
     v = 0;
    for(int i=0;i<n;i++){
            //cout<<i<<" asdsa"<<endl;
        if(p>0 && n1> 0){
            cout<<1<<" "<<0<<" ";
            p--;
            n1--;
            i++;
        }else{
            v++;
          cout<<v<<" ";
        }
     //cout<<i<<" asdsa"<<endl;
    }
cout<<endl;
 }
}
