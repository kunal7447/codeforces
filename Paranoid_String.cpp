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
    long long sum=0;
    for(int i=1;i<n;i++){
        if(h[i]!=h[i-1]){
            sum = sum+i;
        }
    }
    cout<<sum+n<<endl;
}
return 0;
}
