#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
            int n;
            string s="FBFFBFFBFBFFBFFBFB";
    cin>>n;
    string h;
    cin>>h;
    int a=0;
    int f=0;
    int b=0;
    int x=0;
    int x1=0;
   bool found = s.find(h) != std::string::npos;

    if (found) {
        std::cout << "YES" << std::endl;
    }
    else {
        std::cout << "NO" << std::endl;
    }


    }
return 0;
}
