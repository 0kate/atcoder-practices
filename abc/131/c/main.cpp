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
    return a * b / gcd(a, b);
}

void solve() {
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    a = a - 1;

    ll e = lcm(c, d);
    ll f = b / c + b / d - b / e;
    ll x = b - f;
    ll g = a / c + a / d - a / e;
    ll y = a - g;

    cout << (x - y) << endl;
}

int main() {
    solve();

    return 0;
}
