#include <bits/stdc++.h>

#define rep(l, r) for (int i = (l); i < (r); i++)

typedef long long ll;
 
using namespace std;

ll calc(ll a, ll b, ll n) {
    string sn = to_string(n);
    return a * n + b * sn.size();
}

ll binary_search(ll a, ll b, ll x) {
    ll ok = 0, ng = 1e9 + 1, mid;

    while (ng - ok > 1) {
        mid = (ok + ng) / 2;
        if (calc(a, b, mid) <= x) {
            ok = mid;
        } else {
            ng = mid;
        }
    }

    return (0 < ok ? ok : 0);
}

void solve() {
    ll a, b, x;
    cin >> a >> b >> x;

    cout << binary_search(a, b, x) << endl;
}

int main() {
    solve();

    return 0;
}
