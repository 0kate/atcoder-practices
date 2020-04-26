#include <bits/stdc++.h>

#define rep(l, r) for (int i = (l); i < (r); i++)

typedef long long ll;
 
using namespace std;

void solve() {
    int n;
    cin >> n;

    string s;
    set<string> s_set;
    rep(0, n) {
        cin >> s;
        s_set.insert(s);
    }

    cout << s_set.size() << endl;
}

int main() {
    solve();

    return 0;
}
