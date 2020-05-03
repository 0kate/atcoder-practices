#include <bits/stdc++.h>

#define rep(l, r) for (int i = (l); i < (r); i++)

typedef long long ll;
 
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;

    int s[m], c[m];
    rep(0, m) cin >> s[i] >> c[i];

    int ans = -1;
    bool ok;
    string sx;
    for (int x = 0; x <= 999; x++) {
        sx = to_string(x);

        ok = true;
        if (sx.size() == n) {
            for (int i = 0; i < m; i++) {
                if (sx[s[i]-1] != c[i]) {
                    ok = false;
                    break;
                }
            }
        } else {
            ok = false;
        }

        if (ok) {
            ans = x;
            break;
        }
    }

    cout << ans << endl;
}

int main() {
    solve();

    return 0;
}
