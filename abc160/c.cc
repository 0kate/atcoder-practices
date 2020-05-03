#include <bits/stdc++.h>

#define rep(l, r) for (int i = (l); i < (r); i++)

typedef long long ll;
 
using namespace std;

void solve() {
    int k, n;
    cin >> k >> n;

    int a[n];
    rep(0, n) {
        cin >> a[i];
    }

    int min_dist = k - abs(a[0] - a[n-1]);
    rep(1, n) {
        min_dist = min(min_dist, k - abs(a[i] - a[i-1]));
    }

    cout << (min_dist) << endl;
}

int main() {
    solve();

    return 0;
}
