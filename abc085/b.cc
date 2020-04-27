#include <bits/stdc++.h>

#define rep(l, r) for (int i = (l); i < (r); i++)

typedef long long ll;
 
using namespace std;

void solve() {
    int n;
    cin >> n;

    int d;
    set<int> d_set;
    rep(0, n) {
        cin >> d;
        d_set.insert(d);
    }

    cout << d_set.size() << endl;
}

int main() {
    solve();

    return 0;
}
