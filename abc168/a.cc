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
    int n;
    cin >> n;

    n = n % 10;

    switch (n) {
        case 2:
        case 4:
        case 5:
        case 7:
        case 9:
            cout << "hon" << endl;
            break;
        case 0:
        case 1:
        case 6:
        case 8:
            cout << "pon" << endl;
            break;
        case 3:
            cout << "bon" << endl;
            break;
    }
}

int main() {
    solve();

    return 0;
}
