#include<bits/stdc++.h>
using namespace std;
int main(){
   string h;
   cin>>h;
   for(int i=0;i<h.length();i++){
    if(h[i]>=97 && h[i]<=97+26){
        char f = h[i];
        f = f - 32;
        h[i] = f;
    }
   }
   cout<<h<<endl;
}
