#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string h;
        cin>>h;
        int n = h.length();
        vector<vector<int>> v(26);
        for(int i=0;i<26;i++){
            v[i].push_back(-1);
        }
        for(int i=0;i<n;i++){
            v[h[i]-97].push_back(i);
        }
        for(int i=0;i<26;i++){
            v[i].push_back(n);
        }
        int arr[26]={0};
        int mini  = 10000000;
        for(int i=0;i<26;i++){
            int m = 0;
            for(int j=0;j<v[i].size()-1;j++){
                int k = v[i][j+1]-v[i][j]-1;
                m  = max(m,k);
            }
            arr[i] = m;
            mini = min(m,mini);
        }
        int k = 0;
        //cout<<mini<<endl;
        while(mini!=0){
            mini = mini/2;
            k++;
        }
        cout<<k<<endl;
    }
}
