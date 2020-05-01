#include <bits/stdc++.h>

#define rep(l, r) for (int i = (l); i < (r); i++)

typedef long long ll;
 
using namespace std;

void solve() {
    int x, y, z;
    cin >> x >> y >> z;

    int tmp;

    tmp = x;
    x = y;
    y = tmp;

    tmp = x;
    x = z;
    z = tmp;

    cout << x << " " << y << " " << z << endl;
}

int main() {
    solve();

    return 0;
}
