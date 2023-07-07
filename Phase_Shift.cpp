#include<bits/stdc++.h>
using namespace std;
bool check(int arr[],int i,int j){
   arr[i] = j;
  int k = i;
 // cout<<"svsdvs"<<endl;
   for(int z = 0;z<27;z++){
        if(k==-1){
            //    cout<<"hello"<<endl;
            return true;
        }
    k = arr[k];
    //cout<<k<<endl;
   }
   arr[i]=-1;
   return false;
}
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    string h;
    cin>>h;
    unordered_map<int,int> m;
    int arr[26];
    for(int i=0;i<26;i++){
        arr[i] = -1;
    }
    int c = 0;
    for(int i=0;i<n;i++){
        if(arr[h[i]-97]==-1 && c<25){
            for(int j=0;j<26;j++){
                if(j!=h[i]-97 && m.find(j)==m.end()){
                    bool ch = check(arr,h[i]-97,j);
                    if(ch){
                            m[j] = 1;
                        break;
                    }
                }
            }
            c++;
        }else if(arr[h[i]-97]==-1 && c==25){
           for(int j=0;j<26;j++){
                if(j!=h[i]-97 && m.find(j)==m.end()){
                   arr[h[i]-97] = j; c++;  m[j] = 1;
                   break;
                }
            }

        }
        cout<<char(arr[h[i]-97]+97);
    }
    //cout<<endl;
    for(int i=0;i<26;i++){
      //  cout<<arr[i]<<" ";
    }
    cout<<endl;
  }
}
