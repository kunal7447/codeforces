#include <iostream>

using namespace std;
#define ll long long

bool f(ll n, ll m, ll k) {
    ll sum = 0;
    while (m != 0) {
        sum = sum + m;
        m = m / k;
    }
    return sum >= n;
}

int main() {
    ll n, k;
    cin >> n >> k;
    ll s = 0;
    ll e = n * k;
    ll ans = n * k;
    while (s <= e) {
        ll mid = (s + e) / 2;
        if (f(n, mid, k)) {
            ans = mid;
            e = mid - 1;
        }
        else {
            s = mid + 1;
        }
    }
    cout << ans << endl;
    return 0;
}
