#include <bits/stdc++.h>

#define rep(l, r) for (int i = (l); i < (r); i++)

typedef long long ll;
 
using namespace std;

void solve() {
    int n;
    cin >> n;

    ll l[n+1];
    l[0] = 2; l[1] = 1;
    rep(2, n+1) {
        l[i] = l[i-1] + l[i-2];
    }

    cout << l[n] << endl;
}

int main() {
    solve();

    return 0;
}
