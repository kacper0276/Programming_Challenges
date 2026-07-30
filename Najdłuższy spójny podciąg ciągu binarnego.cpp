#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void solve() {
    int n, k;
    if (!(cin >> n >> k)) return;
    string s;
    cin >> s;

    int left = 0;
    int ones_count = 0;
    int max_len = 0;

    for (int right = 0; right < n; ++right) {
        if (s[right] == '1') {
            ones_count++;
        }
        while (ones_count > k) {
            if (s[left] == '1') {
                ones_count--;
            }
            left++;
        }
        max_len = max(max_len, right - left + 1);
    }
    cout << max_len << "\n";
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