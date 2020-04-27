#include <bits/stdc++.h>

#define rep(l, r) for (int i = (l); i < (r); i++)

typedef long long ll;
 
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    int num = 1;
    rep(0, n) {
        if (num < k) {
            num *= 2;
        } else {
            num += k;
        }
    }

    cout << num << endl;
}

int main() {
    solve();

    return 0;
}
