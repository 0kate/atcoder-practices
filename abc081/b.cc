#include <bits/stdc++.h>

#define rep(l, r) for (int i = (l); i < (r); i++)

typedef long long ll;
 
using namespace std;

int calc(int n) {
    int cnt = 0;
    while (n % 2 == 0) {
        cnt++;
        n /= 2;
    }

    return cnt;
}

void solve() {
    int n;
    cin >> n;

    int a, min_div = 1e9;
    rep(0, n) {
        cin >> a;
        min_div = min(min_div, calc(a));
    }

    cout << min_div << endl;
}

int main() {
    solve();

    return 0;
}
