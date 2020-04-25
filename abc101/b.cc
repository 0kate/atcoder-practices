#include <bits/stdc++.h>

#define rep(l, r) for (int i = (l); i < (r); i++)

typedef long long ll;
 
using namespace std;

void solve() {
    int n;
    cin >> n;

    int tmp_n = n, digits_sum = 0;
    while (0 < tmp_n) {
        digits_sum += tmp_n % 10;
        tmp_n /= 10;
    }

    cout << (n % digits_sum == 0 ? "Yes" : "No") << endl;
}

int main() {
    solve();

    return 0;
}
