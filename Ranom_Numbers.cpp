#include <bits/stdc++.h>
using namespace std;

#define ll long long

map<char, ll> m;

ll f(string& s, int ch, int i, ll maxi, vector<vector<vector<ll>>>& vdp, vector<vector<vector<bool>>>& dp) {
    if (s.length() <= i) {
        return 0;
    }
    ll ans = 0;
    if(maxi!=-1){
    if (dp[i][maxi][ch] == true) {
        return vdp[i][maxi][ch];
    }
    }
    if (s[i]-65 < maxi) {
        ans = -m[s[i]] + f(s, ch, i + 1, maxi, vdp, dp);

    } else {
        ans = m[s[i]] + f(s, ch, i + 1, s[i]-65, vdp, dp);

    }

    if (ch == 1) {
        for (int b = 0; b < 5; b++) {
            ll j = b + 65;
            char d = j;
            if (b >= maxi) {
                ans = max(ans, m[d] + f(s, 0, i + 1, b, vdp, dp));
            } else {
                ans = max(ans, -m[d] + f(s, 0, i + 1, maxi, vdp, dp));
            }
        }
    }
    if(maxi==-1){
        return ans;
    }
    dp[i][maxi][ch] = true;
    vdp[i][maxi][ch] = ans;
    return ans;
}

int main() {
    ll t;
    cin >> t;
    m['A'-1] = 0;
    m['A'] = 1;
    m['B'] = 10;
    m['C'] = 100;
    m['D'] = 1000;
    m['E'] = 10000;
    while (t--) {
            //cout<<m[64]<<endl;
        string s;
        cin >> s;
        ll n = s.length();
        ll s1 = 0;
        ll e1 = n - 1;
        while (s1 < e1) {
            char temp = s[s1];
            s[s1] = s[e1];
            s[e1] = temp;
            s1++;
            e1--;
        }
        vector<vector<vector<ll>>> vdp(n + 1, vector<vector<ll>>(6, vector<ll>(2, 0)));
        vector<vector<vector<bool>>> dp(n + 1, vector<vector<bool>>(6, vector<bool>(2, false)));
        ll z = f(s, 1, 0, -1, vdp, dp);
        cout << z << endl;
    }
    return 0;
}
