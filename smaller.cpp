#include<bits/stdc++.h>
using namespace std;
int main(){
  long long t;
  cin>>t;
  while(t--){
    long long n;
    cin>>n;
    map<long long,long long> s;
    map<long long,long long> t;
    s['a']++;
    t['a']++;
    while(n--){
        long long d;
        cin>>d;
        long long k;
        cin>>k;
        string str;

        cin>>str;
        if(d==1){
            for(long long i=0;i<str.length();i++){
                  if(s.find(str[i])==s.end()){
                    s[str[i]] = k;
                  }else{
                    long long u = s[str[i]];
                    u = u+k;
                    s[str[i]] = u;
                  }
            }
        }else{
         for(long long i=0;i<str.length();i++){
               if(t.find(str[i])==t.end()){
                    t[str[i]] = k;
                  }else{
                    long long u = t[str[i]];
                    u = u+k;
                    t[str[i]] = u;
                  }
            }
        }
        auto it = s.begin();
        auto it1 = t.end();
        it1--;
        if(it->first < it1->first){
            cout<<"YES"<<endl;
        }else if(it->first>it1->first){
          cout<<"NO"<<endl;
        }else{
           if(it->second<it1->second && s.size()==1){
              // cout<<n<<endl;
             cout<<"YES"<<endl;
             continue;
           }else if(it->second==it1->second && t.size()>1 && s.size()==1){
              cout<<"YES"<<endl;
              continue;
           }else{
           cout<<"NO"<<endl;
           }
        }

    }
    s.clear();
    t.clear();
  }

}
