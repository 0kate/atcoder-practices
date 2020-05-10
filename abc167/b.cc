#include <bits/stdc++.h>

#define rep(l, r) for (int i = (l); i < (r); i++)

typedef long long ll;
 
using namespace std;

template <typename T> T gcd(T a, T b) {
    if (b == 0)
        return a;

    return gcd(b, a % b);
}

template <typename T> T lcm(T a, T b) {
    return (a * b) / gcd(a, b);
}

void solve() {
    ll a[3], n[] = {1, 0, -1}, k;
    rep(0, 3) cin >> a[i];
    cin >> k;

    ll ans = 0;
    rep(0, 3) {
        if (k <= a[i]) {
            ans += (n[i] * k);
            break;
        } else {
            ans += (n[i] * a[i]);
            k -= a[i];
        }
    }

    cout << ans << endl;
}

int main() {
    solve();

    return 0;
}
