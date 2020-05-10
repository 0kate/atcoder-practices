#include <bits/stdc++.h>

#define rep(l, r) for (int i = (l); i < (r); i++)

typedef long long ll;
 
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    k--;
    
    int a[n], l_cnt = 0, r_cnt = 0;
    bool is_right = false;
    rep(0, n) {
        cin >> a[i];
        if (a[i] == 1) {
            is_right = true;
        } else if (is_right) {
            r_cnt++;
        } else {
            l_cnt++;
        }
    }

    int ans = 0;
    ans += l_cnt / k;
    ans += (0 < (l_cnt % k)) ? 1 : 0;
    ans += r_cnt / k;
    ans += (0 < (r_cnt % k)) ? 1 : 0;

    cout << ans << endl;
}

int main() {
    solve();

    return 0;
}
