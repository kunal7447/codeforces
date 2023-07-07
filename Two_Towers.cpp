#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        string h;
        cin>>h;
        string k;
        cin>>k;
        int c = 0;
        int z1 = 2;
        int z2 = 2;
        int q=0;
        int w = 0;
           if(k[m-1]==h[n-1]){
            c=1;
           }
           if(m<=2){
            z1=1;
           }
           if(n<=2){
            z2=1;
           }
           for(int i=m-1;i>=1;i--){
              if(k[i]==k[i-1]){


                q++;

              }
           }
              for(int i=n-1;i>=1;i--){
              if(h[i]==h[i-1]){

               w++;
              }
           }


   if(c==0){
    if((q==1 && w==0) ||(q==0 && w==0) || (q==0 && w==1)){
    cout<<"YES"<<endl;
  }else{
    cout<<"NO"<<endl;
  }
   }else{
     if(q==0 && w==0){
     cout<<"YES"<<endl;
  }else{
    cout<<"NO"<<endl;
  }
    }
}
return 0;
}
