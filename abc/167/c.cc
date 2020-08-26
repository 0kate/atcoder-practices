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
    ll n, m, x;
    cin >> n >> m >> x;

    ll c[n], a[n][m];
    for (int i = 0; i < n; i++) {
        cin >> c[i];
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    ll sum_c, t[m], min_c = 1e9;
    bool possible;
    for (ll bit = 0; bit < (1<<n); bit++) {
        sum_c = 0;
        bzero(t, sizeof(t));
        possible = true;
        for (ll i = 0; i < n; i++) {
            if (bit & (1<<i)) {
                sum_c += c[i];
                for (ll j = 0; j < m; j++) {
                    t[j] += a[i][j];
                }
            }
        }

        for (ll i = 0; i < m; i++) {
            if (t[i] < x) {
                possible = false;
                break;
            }
        }

        if (possible) {
            min_c = min(min_c, sum_c);
        }
    }

    cout << (min_c < 1e9 ? min_c : -1) << endl;
}

int main() {
    solve();

    return 0;
}
