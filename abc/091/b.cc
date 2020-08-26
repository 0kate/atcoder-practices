#include <bits/stdc++.h>

#define rep(l, r) for (int i = (l); i < (r); i++)

typedef long long ll;
 
using namespace std;

void solve() {
    int n, m;
    string s, t;

    set<string> word_set;

    map<string, int> blue_count;
    cin >> n;
    rep(0, n) {
        cin >> s;
        blue_count[s]++;
        word_set.insert(s);
    }

    map<string, int> red_count;
    cin >> m;
    rep(0, m) {
        cin >> t;
        red_count[t]++;
        word_set.insert(t);
    }

    int max_x = 0;
    for (string s : word_set) {
        max_x = max(max_x, blue_count[s] - red_count[s]);
    }

    cout << max_x << endl;
}

int main() {
    solve();

    return 0;
}
