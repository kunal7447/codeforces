#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    if(n==1){
        cout<<0<<endl;
        continue;
    }
    int a = sqrt(2*(n-1));
    int arr[n]={0};
    a = a*a;
    int k = n-1;
    for(int i=n-1;i>=0;i--){
            if(a-i>k){
                a = sqrt(2*i);
                a = a*a;
                k = i;
            }
        arr[i]=a-i;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
return 0;
}
