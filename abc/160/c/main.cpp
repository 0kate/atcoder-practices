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
    int k, n;
    cin >> k >> n;

    int a[n];
    rep(0, n) cin >> a[i];

    int diff, max_diff = 0;
    rep(1, n) {
        diff = abs(a[i]-a[i-1]);
        max_diff = max(max_diff, diff);
    }
    diff = abs(k - a[n-1] + a[0]);
    max_diff = max(max_diff, diff);

    cout << (k - max_diff) << endl;
}

int main() {
    solve();

    return 0;
}
