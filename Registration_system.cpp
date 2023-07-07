#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  unordered_map<string,int> m;
  for(int i=0;i<n;i++){
    string h;
    cin>>h;
    auto p = m.find(h);
    if(p!=m.end()){
        int y = p->second;
        y++;
        string j = h + to_string(y);
        m[h]=y;
        m[j]=0;
        cout<<j<<endl;
    }else{
       m[h]=0;
       cout<<"OK"<<endl;
    }
  }
}
