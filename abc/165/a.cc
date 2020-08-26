#include <bits/stdc++.h>

#define rep(l, r) for (int i = (l); i < (r); i++)

typedef long long ll;
 
using namespace std;

void solve() {
    int k, a, b;
    cin >> k >> a >> b;

    bool found = false;
    for (int i = a; i <= b; i++) {
        if (i % k == 0) {
            found = true;
            break;
        }
    }

    cout << (found ? "OK" : "NG") << endl;
}

int main() {
    solve();

    return 0;
}
