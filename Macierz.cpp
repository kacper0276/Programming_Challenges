#include <iostream>
#include <algorithm>

using namespace std;

void solve() {
    long long d, k, p;
    cin >> d >> k >> p;

    if (k < d) {
        long long disks = (p + k - 1) / k;
        long long controllers = disks;
        cout << disks << " " << controllers << "\n";
    }
    else {
        long long disks = (p + d - 1) / d;
        long long per_ctrl = k / d;
        long long controllers = (disks + per_ctrl - 1) / per_ctrl;
        cout << disks << " " << controllers << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}