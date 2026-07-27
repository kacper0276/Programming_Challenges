#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

void solve() {
    int a, pa, b, pb;
    if (!(cin >> a >> pa >> b >> pb)) return;
    int d = abs(pa - pb) - 1;
    if (a > b) {
        if (d % 3 != 0) {
            cout << 1 << "\n";
        }
        else {
            cout << 0 << "\n";
        }
    }
    else {
        if (d % 3 != 0) {
            cout << 0 << "\n";
        }
        else {
            cout << 1 << "\n";
        }
    }
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