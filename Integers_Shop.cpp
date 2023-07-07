#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
   ll t;
   cin>>t;
   while(t--){
    ll n;
    cin>>n;
    ll a,b,c;
    cin>>a>>b>>c;
    ll mini = a;
    ll maxi = b;
    ll cmi = c;
    ll cma = c;
    ll ch = 1;
    ll cost = c;
    ll mar;
    ll mir;
    cout<<cost<<endl;
    priority_queue<int, vector<int>, greater<int> > l;
    l.push(c);
    priority_queue<int, vector<int>, greater<int> > r;
    r.push(c);
    for(int i=0;i<n-1;i++){

        cin>>a>>b>>c;
        if(a<mini && b>maxi){
            cma = c;
            cmi = c;
            cost = c;
            mini = a;
            maxi = b;
        }else if(a==mini && b>maxi){
            maxi = b;
            cmi = min(cmi,c);
            cma = c;
            cost = c;
        }
        else if(a<mini && b==maxi){
                 mini = a;
            cma = min(cma,c);
            cmi = c;
            cost = c;
        }
        else if(a==mini && b==maxi){
            if(cost>c){
                cost = c;
            }
            cmi = min(cmi,c);
            cma = min(cma,c);
        }else if(a<mini){
            mini = a;
           cost = c+cma;
           cmi = c;
        }else if(b>maxi){
            maxi = b;
           cost = c+cmi;
           cma = c;
        }else if(b==maxi){
           cma = min(cma,c);
           cost = min(cost,cmi+cma);
           }else if(a==mini){
           cmi = min(cmi,c);
           cost = min(cost,cmi+cma);
           }

       cout<<cost<<endl;

    }
   }
}

