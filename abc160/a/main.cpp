#include <bits/stdc++.h>

#define rep(l, r) for (int i = (l); i < (r); i++)

typedef long long ll;
 
using namespace std;

template <typename T> T gcd(T a, T b) {
    if (b == 0)
        return a;

    return gcd(b, a % b);
}

template <typename T> T lcm(T a, T b) {
    return (a * b) / gcd(a, b);
}

void solve() {
    string s;
    cin >> s;

    if (s[2] == s[3] && s[4] == s[5])
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}

int main() {
    solve();

    return 0;
}
