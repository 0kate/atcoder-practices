#include <bits/stdc++.h>

#define rep(l, r) for (int i = (l); i < (r); i++)

typedef long long ll;
 
using namespace std;

template <typename T> T gcd(T a, T b) {
    if (b == 0)
        return a;

    return gcd(b, a % b);
}

template <typename T> T lcm(T a, T b) {
    return (a * b) / gcd(a, b);
}

void solve() {
    double a, b, h, m;
    cin >> a >> b >> h >> m;

    double hour_angle = 0.0, min_angle;
    bool stop = false;
    for (double hour = 0.0; hour < 12.0; hour++) {
        min_angle = 0.0;
        for (double min = 0.0; min < 60.0; min++) {
            if (hour == h && min == m) {
                stop = true;
                break;
            }
            hour_angle += 0.5;
            min_angle += 6.0;
        }
        if (stop) break;
    }

    double angle = abs(hour_angle - min_angle);
    if (180.0 < angle) angle = 360.0 - angle;
    
    double radian = angle * M_PI / 180.0000;
    double ans = sqrt(pow(a, 2.0)+pow(b, 2.0)-2.0*a*b*cos(radian));
    cout << fixed << setprecision(15) << ans <<endl;
}

int main() {
    solve();

    return 0;
}
