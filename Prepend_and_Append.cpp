#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string h;
        cin>>h;
        int s = 0;
        int e = n-1;
        int c = 0;
        while(h[s]!=h[e] && s<e){
            s++;
            e--;
            c++;
        }
        cout<<n-2*c<<endl;
    }
return 0;
}
