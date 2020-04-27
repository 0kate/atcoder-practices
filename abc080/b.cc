#include <bits/stdc++.h>

#define rep(l, r) for (int i = (l); i < (r); i++)

typedef long long ll;
 
using namespace std;

int calc(int n) {
    int sum = 0;
    while (0 < n) {
        sum += n % 10;
        n /= 10;
    }

    return sum;
}

void solve() {
    int n;
    cin >> n;

    int fx = calc(n);

    cout << (n % fx == 0 ? "Yes" : "No") << endl;
}

int main() {
    solve();

    return 0;
}
