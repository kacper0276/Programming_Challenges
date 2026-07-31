#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int m;
    if (!(cin >> m)) return;
    vector<long long> a(m);
    long long total_sum = 0;
    for (int i = 0; i < m; ++i) {
        cin >> a[i];
        total_sum += a[i];
    }

    long long prefix_sum = 0;
    int result = 0;
    for (int i = 0; i < m - 1; ++i) {
        prefix_sum += a[i];
        if (prefix_sum * 2 == total_sum) {
            result = i + 1;
            break;
        }
    }
    cout << result << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int z;
    if (cin >> z) {
        while (z--) {
            solve();
        }
    }
    return 0;
}