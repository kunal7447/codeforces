#include<bits/stdc++.h>
using namespace std;
int main(){
    int h;
    cin>>h;
    while(h--){
  int t,q;
  string s1,s2;
  cin>>s1;
  cin>>s2;
  s1 = "0"+s1;
  s2 = "0"+s2;
  cin>>t>>q;
  int blocked[s1.length()]={0};

  for(int i=1;i<=q;i++){
        int x1;
    cin>>x1;
    if(x1==1){
        int f;
        cin>>f;

        blocked[f] = t + i;

    }else if(x1==2){
      int x,c,v,b;
      cin>>x>>c>>v>>b;
      if(blocked[c]<=i && blocked[b]<=i){

        }else{
        continue;
        }
      if(x==1 && v==2){
        char temp = s1[c];
        s1[c] = s2[b];
        s2[b]=temp;
      }else if(x==2 && v==1){
          char temp = s2[c];
        s2[c] = s1[b];
        s1[b]=temp;
      }else if(x==1 && v==1){
      char temp = s1[c];
        s1[c] = s1[b];
        s1[b]=temp;
      }else{

        char temp = s2[c];
        s2[c] = s2[b];
        s2[b]=temp;
      }
    }else{
       int ch = 1;
       for(int w=1;w<s1.length();w++){
        if(blocked[w]<=i){
            if(s1[w]==s2[w]){

            }else{
              ch = 0;
              cout<<"NO"<<endl;
              break;
            }
        }
       }
       if(ch){
        cout<<"YES"<<endl;
       }
    }

  }
}

}
