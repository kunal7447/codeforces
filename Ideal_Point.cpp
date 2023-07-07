#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int c=0;
        map<int,int> m;
        int s1 = 0;
        int e1=0;
        for(int i=0;i<n;i++){
            int s;
            int e;
            cin>>s>>e;
            if(s==k){
                s1++;
            }if(e==k){
            e1++;
            }
        }
        if(e1>0 && s1>0){
            cout<<"YES"<<endl;
        }else{
        cout<<"NO"<<endl;}

    }
return 0;
}
