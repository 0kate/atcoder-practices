#include <bits/stdc++.h>

#define rep(l, r) for (int i = (l); i < (r); i++)

typedef long long ll;
 
using namespace std;

void solve() {
    int n, x;
    cin >> n >> x;

    int a[n];
    rep(0, n) cin >> a[i];

    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (x & (1<<i)) {
            sum += a[i];
        }
    }

    cout << sum << endl;
}

int main() {
    solve();

    return 0;
}
