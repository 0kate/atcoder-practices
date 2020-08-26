#include <bits/stdc++.h>

#define rep(l, r) for (int i = (l); i < (r); i++)

typedef long long ll;
 
using namespace std;

void solve() {
    int n, d, x;
    cin >> n >> d >> x;

    int a, mul, day, c, c_sum = 0;
    rep(0, n) {
        cin >> a;
        mul = 0;
        c = 0;
        day = a * mul + 1;
        while (day <= d) {
            c++;
            mul++;
            day = a * mul + 1;
        }
        c_sum += c;
    }

    cout << (c_sum + x) << endl;
}

int main() {
    solve();

    return 0;
}
