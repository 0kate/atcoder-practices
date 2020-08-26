#include <bits/stdc++.h>

#define rep(l, r) for (int i = (l); i < (r); i++)

typedef long long ll;
 
using namespace std;

int n, m, q;
vector<int> a, b, c, d;

int dfs(vector<int> A, int new_n) {
    A.push_back(new_n);

    if (A.size() == n) {
        int sum = 0;
        rep(0, q) {
            if (A[b[i]] - A[a[i]] == c[i]) {
                sum += d[i];
            }
        }
        return sum;
    }

    int before = A.size() - 1;
    int ret = 0;
    for (int i = A[before]; i <= m; i++) {
        ret = max(ret, dfs(A, i));
    }

    return ret;
}

void solve() {
    cin >> n >> m >> q;

    int ai, bi, ci, di;
    rep(0, q) {
        cin >> ai >> bi >> ci >> di;
        a.push_back(ai-1);
        b.push_back(bi-1);
        c.push_back(ci);
        d.push_back(di);
    }

    int ans = 0;
    vector<int> empty;
    for (int i = 1; i <= m; i++) {
        ans = max(ans, dfs(empty, i));
    }

    cout << ans << endl;
}

int main() {
    solve();

    return 0;
}
