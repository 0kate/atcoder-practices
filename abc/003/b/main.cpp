#include <bits/stdc++.h>

#define rep(l, r) for (int i = (l); i < (r); i++)

typedef long long ll;
 
using namespace std;

bool is_atcoder(char c) {
    switch (c) {
        case 'a':
        case 't':
        case 'c':
        case 'o':
        case 'd':
        case 'e':
        case 'r':
            return true;
        default:
            return false;
    }
}

void solve() {
    string s, t;
    cin >> s >> t;

    int i = 0;
    bool possible = true;
    while (i < s.size() && i < t.size()) {
        if (s[i] != t[i]) {
            if (s[i] == '@') {
                if (!is_atcoder(t[i])) {
                    possible = false;
                    break;
                }
            } else if (t[i] == '@') {
                if (!is_atcoder(s[i])) {
                    possible = false;
                    break;
                }
            } else {
                possible = false;
                break;
            }
        }

        i++;
    }

    cout << (possible ? "You can win" : "You will lose") << endl;
}

int main() {
    solve();

    return 0;
}
