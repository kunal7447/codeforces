#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int arr[n+1];
    int o1=0;
    int on = 0;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
        if(arr[i]==1){
            o1++;
        }else{
            on++;
        }
    }
    if((o1-on)%2==0){
            int a ;
        if(o1>on){
            a = 1;
        }else{
        a = -1;
        }
        if(o1==on){
            cout<<n<<endl;
            for(int i=1;i<=n;i++){
                cout<<i<<" "<<i<<endl;
            }
            continue;
        }
    int d = abs(o1-on)/2;
    int s = 1;
    int e = 0;
    int c = 0;
    cout<<n-d<<endl;
    for(int i=1;i<=n;i++){
        if(c<d){
            if(arr[i]==a){
                if(arr[i]==arr[i+1]){
                    c++;
                    i++;
                    cout<<i-1<<" "<<i<<endl;
                    continue;
                }
            }
        }
        cout<<i<<" "<<i<<endl;
    }



    }else{
    cout<<-1<<endl;
    }

  }
}
