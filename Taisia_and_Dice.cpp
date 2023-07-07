#include<iostream>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n,s,r;
    cin>>n>>s>>r;
    int k = (r)/(n-1);
    int k1=k;
    int a = r%(n-1);
    for(int i = 0;i<a;i++){
        cout<<k+1<<" ";
    }
    for(int i=0;i<n-1-a;i++){
        cout<<k<<" ";

    }
    cout<<s-r<<endl;
}
}
