#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    string s1, s2;
    if (!(cin >> s1 >> s2)) return;

    int cnt[26] = { 0 };

    for (char c : s1) {
        cnt[c - 'a']++;
    }
    for (char c : s2) {
        cnt[c - 'a']--;
    }

    int pos = 0, neg = 0;
    for (int i = 0; i < 26; ++i) {
        if (cnt[i] > 0) pos += cnt[i];
        else neg -= cnt[i];
    }

    cout << max(pos, neg) << "\n";
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