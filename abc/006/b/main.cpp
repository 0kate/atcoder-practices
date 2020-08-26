#include <bits/stdc++.h>

#define rep(l, r) for (int i = (l); i < (r); i++)

typedef long long ll;
 
using namespace std;

void solve() {
    int n;
    cin >> n;

    ll tri[n];
    tri[0] = 0;
    tri[1] = 0;
    tri[2] = 1;

    rep(3, n) {
        tri[i] = (tri[i-1] + tri[i-2] + tri[i-3]) % 10007;
    }

    cout << tri[n-1] << endl;
}

int main() {
    solve();

    return 0;
}
