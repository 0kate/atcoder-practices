#include <bits/stdc++.h>

#define rep(l, r) for (int i = (l); i < (r); i++)

typedef long long ll;
 
using namespace std;

ll gcd(ll a, ll b) {
    if (b == 0) {
        return a;
    }

    return gcd(b, a % b);
}

void solve() {
    ll N, X;
    cin >> N >> X;

    ll x[N+1];
    rep(0, N) cin >> x[i];
    x[N] = X;

    sort(x, x+(N+1));
    
    ll ans = 0;
    for (ll i = 1; i < N + 1; i++) {
        ans = gcd(ans, abs(x[i] - x[i-1]));
    }

    cout << ans << endl;
}

int main() {
    solve();

    return 0;
}
