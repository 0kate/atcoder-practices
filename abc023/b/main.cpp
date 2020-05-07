#include <bits/stdc++.h>

#define rep(l, r) for (int i = (l); i < (r); i++)

typedef long long ll;
 
using namespace std;

void solve() {
    int n;
    string s;
    cin >> n >> s;

    int cnt = 0;
    string acc = "b";
    bool possible = true;
    if (regex_search(s, regex("[a-c]+"))) {
        while (s != acc) {
            if (s.size() < acc.size()) {
                possible = false;
                break;
            }

            switch (cnt % 3) {
                case 0:
                    acc = "a" + acc + "c";
                    break;
                case 1:
                    acc = "c" + acc + "a";
                    break;
                case 2:
                    acc = "b" + acc + "b";
                    break;
            }
            cnt++;
        }
    } else {
        possible = false;
    }

    cout << (possible ? cnt : -1) << endl;
}

int main() {
    solve();

    return 0;
}
