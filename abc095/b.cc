#include <bits/stdc++.h>

#define rep(l, r) for (int i = (l); i < (r); i++)

typedef long long ll;
 
using namespace std;

void solve() {
    int n, x;
    cin >> n >> x;

    int m[n];
    rep(0, n) cin >> m[i];

    int sum = accumulate(m, m+n, 0);
    sort(m, m+n);

    int cnt = n;
    x -= sum;
    while (m[0] <= x) {
        cnt++;
        x -= m[0];
    }

    cout << cnt << endl;
}

int main() {
    solve();

    return 0;
}
