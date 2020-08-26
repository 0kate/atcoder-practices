#include <bits/stdc++.h>

#define rep(l, r) for (int i = (l); i < (r); i++)

typedef long long ll;
 
using namespace std;

void solve() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int cnt = 0;
    while (0 < a && 0 < c) {
        if (cnt % 2 == 0) {
            c -= b;
        } else {
            a -= d;
        }
        cnt++;
    }

    cout << (c < 1 ? "Yes" : "No") << endl;
}

int main() {
    solve();

    return 0;
}
