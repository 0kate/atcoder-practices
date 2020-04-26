#include <bits/stdc++.h>

#define rep(l, r) for (int i = (l); i < (r); i++)

typedef long long ll;
 
using namespace std;

void solve() {
    int s, w;
    cin >> s >> w;

    cout << (s <= w ? "unsafe" : "safe") << endl;
}

int main() {
    solve();

    return 0;
}
