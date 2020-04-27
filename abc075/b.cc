#include <bits/stdc++.h>

#define rep(l, r) for (int i = (l); i < (r); i++)

typedef long long ll;
 
using namespace std;

void solve() {
    int h, w;
    cin >> h >> w;

    char s[h][w];
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            cin >> s[i][j];
        }
    }

    int next_h, next_w;
    int move_h[] = {-1, -1, 0, 1, 1, 1,  0, -1};
    int move_w[] = { 0, 1, 1, 1, 0, -1, -1, -1};
    int cnt[h][w];
    bzero(cnt, sizeof(cnt));
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            for (int k = 0; k < 8; k++) {
                next_h = i + move_h[k];
                next_w = j + move_w[k];

                if (0 <= next_h && next_h < h && 0 <= next_w && next_w < w) {
                    if (s[next_h][next_w] == '#') cnt[i][j]++;
                }
            }
        }
    }

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            if (s[i][j] == '#') cout << '#';
            else cout << cnt[i][j];
        }
        cout << endl;
    }
}

int main() {
    solve();

    return 0;
}
