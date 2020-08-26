#include <bits/stdc++.h>

#define rep(l, r) for (int i = (l); i < (r); i++)

typedef long long ll;
 
using namespace std;

void solve() {
    int n;
    cin >> n;

    int a, cnt = 0;
    set<int> flowers;
    rep(0, n) {
        cin >> a;
        if (flowers.find(a) != flowers.end()) cnt++;
        flowers.insert(a);
    }

    cout << cnt << endl;
}

int main() {
    solve();

    return 0;
}
