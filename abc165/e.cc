#include <bits/stdc++.h>

#define rep(l, r) for (int i = (l); i < (r); i++)

typedef long long ll;
 
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;

    int p = 1, diff = n - 1;
    vector<pair<int, int>> matchings;
    while (matchings.size() < m) {
        matchings.push_back(make_pair(p, p+diff));
        diff -= 2;
        p++;
    }

    for (int i = 0; i < matchings.size(); i++) {
        cout << matchings[i].first << " " << matchings[i].second << endl;
    }
}

int main() {
    solve();

    return 0;
}
