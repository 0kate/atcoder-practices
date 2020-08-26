#include <bits/stdc++.h>

#define rep(l, r) for (int i = (l); i < (r); i++)

typedef long long ll;
 
using namespace std;

void solve() {
    int x;
    cin >> x;

    int b, max_pow = 1;
    for (int i = 2; i <= x; i++) {
        b = 2;
        while (pow(i, b) <= x) {
            max_pow = max(max_pow, int(pow(i, b)));
            b++;
        }
    }

    cout << max_pow << endl;
}

int main() {
    solve();

    return 0;
}
