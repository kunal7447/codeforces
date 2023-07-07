#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    string h;
    cin>>h;
    int s=1;
    int open = 0;
    int close = 0;
    int c = 1;
    int arr[n] = {0};
    int ch = 0;
    int  y = 0;
    for(int i=0;i<n;i++){
        if(s==1){
         if(h[i]=='('){
                c = 1;
                open++;

                    y = 1;


            }else{
              c = 2;
              close++;
              ch = 1;
            }
            s = 0;
        }else{
           if(h[i]==')'){
            close++;
           }else{
             open++;
           }
        }
        if(open==close){
            open = 0;
            close = 0;
            s = 1;
            arr[i] = c;
        }
       // cout<<c<<endl;
    }
    if(arr[n-1]==0){
        cout<<-1<<endl;
        continue;
    }
  //  int ch = 0;
    for(int i=n-1;i>=0;i--){
        if(arr[i]!=0){


        }else{
          arr[i] = arr[i+1];
        }
    }
    if(ch==1 && y==1){
    cout<<2<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    }else{
    cout<<1<<endl;
    for(int i=0;i<n;i++){
        cout<<1<<" ";
    }
    }
    cout<<endl;
  }
}
