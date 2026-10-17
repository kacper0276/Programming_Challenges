#include <iostream>
#include <cmath>

using namespace std;

void solve() {
    double r, c, w, h;
    cin >> r >> c >> w >> h;

    if (w >= c) {
        cout << "NIE\n";
        return;
    }

    double d = sqrt(r * r - c * c);
    double y0 = h - d;

    if (y0 + w >= r) {
        cout << "NIE\n";
        return;
    }

    if (w * w + y0 * y0 >= r * r) {
        cout << "NIE\n";
        return;
    }

    cout << "TAK\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }

    return 0;
}