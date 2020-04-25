#include <bits/stdc++.h>

#define rep(l, r) for (int i = (l); i < (r); i++)

typedef long long ll;
 
using namespace std;

int calc(int n) {
    int cnt = 0;
    while (n % 100 == 0) {
        n /= 100;
        cnt++;
    }

    return cnt;
}

void solve() {
    int d, n;
    cin >> d >> n;

    int val = 0, cnt = 0;
    while (cnt < n) {
        val++;
        if (calc(val) == d) cnt++;
    }

    cout << val << endl;
}

int main() {
    solve();

    return 0;
}
