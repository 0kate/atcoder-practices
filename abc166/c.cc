#include <bits/stdc++.h>

#define rep(l, r) for (int i = (l); i < (r); i++)

typedef long long ll;
 
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;

    int h[n];
    rep(0, n) cin >> h[i];

    int a, b, max_h[n];
    bzero(max_h, sizeof(max_h));
    rep(0, m) {
        cin >> a >> b;
        max_h[a-1] = max(max_h[a-1], h[b-1]);
        max_h[b-1] = max(max_h[b-1], h[a-1]);
    }

    int cnt = 0;
    rep(0, n) {
        if (max_h[i] < h[i]) cnt++;
    }

    cout << cnt << endl;
}

int main() {
    solve();

    return 0;
}
