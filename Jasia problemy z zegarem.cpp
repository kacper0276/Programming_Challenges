#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void solve() {
    string a, b;
    if (!(cin >> a >> b)) return;
    int h1 = stoi(a.substr(0, 2)), m1 = stoi(a.substr(3, 2));
    int h2 = stoi(b.substr(0, 2)), m2 = stoi(b.substr(3, 2));

    int start = h1 * 60 + m1;
    int end = h2 * 60 + m2;

    if (end < start) {
        end += 1440;
    }

    int k_min = (11 * start + 719) / 720;
    int k_max = (11 * end) / 720;

    cout << max(0, k_max - k_min + 1) << "\n";
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