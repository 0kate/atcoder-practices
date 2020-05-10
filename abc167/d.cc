#include <bits/stdc++.h>

#define rep(l, r) for (long long i = (l); i < (r); i++)

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
    ll n, k;
    cin >> n >> k;

    ll a[n];
    rep(0, n) cin >> a[i];

    ll i = 0, enter_circuit = 0;
    vector<ll> route;
    bool visited[n];
    memset(visited, false, sizeof(visited));
    while (!visited[i]) {
        visited[i] = true;
        route.push_back(i);
        i = a[i] - 1;
    }
    enter_circuit = i;

    ll ans;
    ll before_circuit_len = route.size(), circuit_len = 0;
    for (ll i = 0; i < route.size(); i++) {
        if (route[i] == enter_circuit) {
            circuit_len = route.size() - i;
            before_circuit_len = route.size() - circuit_len;
            break;
        }
    }

    k -= before_circuit_len;
    ans = route[before_circuit_len + (k % circuit_len)] + 1;

    cout << ans << endl;
}

int main() {
    solve();

    return 0;
}
