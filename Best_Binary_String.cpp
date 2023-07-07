#include<bits/stdc++.h>
using namespace std;
int main(){
 int t;
 cin>>t;
 while(t--){
    string h;
    cin>>h;
int    ch = 0;
    int n = h.length();
    int z[n]={0};
    int o[n]={0};
    for(int i= h.length()-1;i>=0;i--){


    }
    for(int i=0;i<h.length();i++){
            if(h[i]=='1'){
                ch = 1;
            }
        if(h[i]=='?'){
            o[i]=ch;
            if(ch){
                ch = 0;
            }
        }

    }
    if(h[n-1]=='?'){
        h[n-1]='1';
    }
    for(int i=0;i<n;i++){
        if(h[i]=='?'){
            if(i==0){
                h[i]='0';
            }else if(i==n-1){
               h[i]='1';
            }else{
              int k = i;
              for(int l=i;l<n;l++){
                if(h[l]=='?'){

                }else{
                k = l-1;
                break;
                }
              }
              if(h[i-1]==h[k]){
                for(int j = i;j<=k;j++){
                    h[j]=h[i-1];
                }
              }else{
                 for(int j = i;j<=k;j++){
                    h[j]=h[i-1];
                }
              }
            }
        }
    }
    cout<<h<<endl;
 }
}
