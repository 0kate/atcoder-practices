#include <bits/stdc++.h>

#define rep(l, r) for (int i = (l); i < (r); i++)

typedef long long ll;
 
using namespace std;

int sum_of_digits(int n) {
    int sum = 0;
    while (0 < n) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

void solve() {
    int n, a, b;
    cin >> n >> a >> b;

    int sum = 0, d;
    for (int i = 1; i <= n; i++) {
        d = sum_of_digits(i);
        if (a <= d && d <= b) sum += i;
    }

    cout << sum << endl;
}

int main() {
    solve();

    return 0;
}
