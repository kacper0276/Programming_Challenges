#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int cur = 0;
    int min_pos = 0;
    int max_pos = 0;

    for (char c : s) {
        if (c == 'U') {
            cur++;
        }
        else if (c == 'D') {
            cur--;
        }
        min_pos = min(min_pos, cur);
        max_pos = max(max_pos, cur);
    }

    if (max_pos - min_pos < n) {
        cout << "TAK\n";
    }
    else {
        cout << "NIE\n";
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