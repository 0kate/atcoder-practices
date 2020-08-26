#include <bits/stdc++.h>

#define rep(l, r) for (int i = (l); i < (r); i++)

typedef long long ll;
 
using namespace std;

void solve() {
    ll x;
    cin >> x;

    ll year = 0;
    ll bank = 100;
    while (bank < x) {
        bank = bank + ll(double(bank) * 0.01);
        year++;
    }

    cout << year << endl;
}

int main() {
    solve();

    return 0;
}
