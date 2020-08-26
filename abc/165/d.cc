#include <bits/stdc++.h>

#define rep(l, r) for (int i = (l); i < (r); i++)

typedef long long ll;
 
using namespace std;

void solve() {
    ll a, b, n;
    cin >> a >> b >> n;

    ll x;
    if (n < b) {
        x = n;
    } else {
        x = b - 1;
    }

    cout << (floor(a * x / b)) << endl;
}

int main() {
    solve();

    return 0;
}
