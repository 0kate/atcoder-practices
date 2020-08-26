#include <bits/stdc++.h>

#define rep(l, r) for (int i = (l); i < (r); i++)

typedef long long ll;
 
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;

    int x[m];
    rep(0, m) cin >> x[i];

    sort(x, x+m);

    int d[m];
    d[0] = 0;
    for (int i = 0; i < m; i++) {
        d[i-1] = x[i] - x[i-1];
    }
    sort(d, d+(m-1));

    int ans = 0;
    if (n < m) {
        for (int i = 0; i < ((m-1)-(n-1)); i++) {
            ans += d[i];
        }
    }

    cout << ans << endl;
}

int main() {
    solve();

    return 0;
}
