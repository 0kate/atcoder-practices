#include <bits/stdc++.h>

#define rep(l, r) for (int i = (l); i < (r); i++)

typedef long long ll;
 
using namespace std;

void solve() {
    int n;
    cin >> n;

    int a[n];
    rep(0, n) cin >> a[i];

    sort(a, a+n);
    reverse(a, a+n);

    int alice = 0, bob = 0;
    rep(0, n) {
        if (i % 2 == 0) {
            alice += a[i];
        } else {
            bob += a[i];
        }
    }
    
    cout << (alice - bob) << endl;
}

int main() {
    solve();

    return 0;
}
