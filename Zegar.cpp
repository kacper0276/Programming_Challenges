#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int k;
    cin >> k;
    vector<int> a(k);
    for (int i = 0; i < k; ++i) {
        cin >> a[i];
    }

    int best_s = 0;
    int max_matches = -1;

    for (int s = 0; s < k; ++s) {
        int matches = 0;
        for (int i = 0; i < k; ++i) {
            if (a[(i + s) % k] == i + 1) {
                matches++;
            }
        }
        if (matches > max_matches) {
            max_matches = matches;
            best_s = s;
        }
    }

    for (int i = 0; i < k; ++i) {
        cout << a[(i + best_s) % k] << (i == k - 1 ? "" : " ");
    }
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int d;
    if (cin >> d) {
        while (d--) {
            solve();
        }
    }
    return 0;
}