#include <bits/stdc++.h>

#define rep(l, r) for (int i = (l); i < (r); i++)

typedef long long ll;
 
using namespace std;

template <typename T>
void precision_cout(T x, int n, bool is_endl = false) {
    cout << fixed << setprecision(n) << x;
    if (is_endl) cout << endl;
}

template <typename T>
T gcd(T a, T b) {
    if (b == 0)
        return a;

    return gcd(b, a % b);
}

template <typename T>
T lcm(T a, T b) {
    return (a * b) / gcd(a, b);
}

template <typename T>
T radian(T angle) {
    return angle * M_PI / 180.0;
}

void solve() {
}

int main() {
    solve();

    return 0;
}
