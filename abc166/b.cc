#include <bits/stdc++.h>

#define rep(l, r) for (int i = (l); i < (r); i++)

typedef long long ll;
 
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    int sunuke[n];
    bzero(sunuke, sizeof(sunuke));

    int d, a;
    rep(0, k) {
        cin >> d;
        for (int j = 0; j < d; j++) {
            cin >> a;
            sunuke[a-1]++;
        }
    }

    int cnt = 0;
    rep(0, n) {
        if (sunuke[i] == 0) cnt++;
    }

    cout << cnt << endl;
}

int main() {
    solve();

    return 0;
}
