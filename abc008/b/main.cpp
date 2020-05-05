#include <bits/stdc++.h>

#define rep(l, r) for (int i = (l); i < (r); i++)

typedef long long ll;
 
using namespace std;

void solve() {
    int n;
    cin >> n;

    string s;
    map<string, int> counts;
    rep(0, n) {
        cin >> s;
        counts[s] += 1;
    }

    int max_cnt = 0;
    string winner = "";
    for (auto count : counts) {
        if (max_cnt < count.second) {
            max_cnt = count.second;
            winner = count.first;
        }
    }
    
    cout << winner << endl;
}

int main() {
    solve();

    return 0;
}
