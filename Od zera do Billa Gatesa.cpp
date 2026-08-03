#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

int counts[8591];

void solve() {
    int n, k;
    if (!(cin >> n >> k)) return;
    memset(counts, 0, sizeof(counts));
    for (int i = 0; i < n; ++i) {
        int price;
        cin >> price;
        counts[price]++;
    }
    long long savings = 0;
    int items_seen = 0;
    for (int price = 8590; price >= 1; --price) {
        int cnt = counts[price];
        if (cnt == 0) continue;

        int needed = k - items_seen;
        if (cnt >= needed) {
            savings += price;
            cnt -= needed;
            savings += (long long)(cnt / k) * price;
            items_seen = cnt % k;
        }
        else {
            items_seen += cnt;
        }
    }
    cout << savings << "\n";
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