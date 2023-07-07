#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    int arr[n+1];
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    int s = 1;
    int e = n;
    int st = 1;
    int y =0;
    int et = n;
    while(e-s>2){

            int k = 0;
            int k1=0;//cout<<s<<" "<<e<<" "<<k<<endl;
        if(arr[s]==st){
            s++;
            st++;
        }else if(arr[s]==et){
             s++;
             et--;
        }else{
            k1 = 1;
        }
            if(arr[e]==st){
            e--;
            st++;
        }else if(arr[e]==et){
             e--;
             et--;
        }else{
            k = 1;
        }
        if(k==1 && k1==1){
            cout<<s<<" "<<e<<endl;
            y=1;
            break;
        }
    }
    if(y==0){
        cout<<-1<<endl;
    }ṇ
    }

}
