#include <iostream>
#include <string>

using namespace std;

void solve() {
    string s;
    if (!(cin >> s)) return;

    int sum6 = 0;
    int alt8 = 0;
    int n = s.length();
    bool all_zero = true;

    for (int i = 0; i < n; ++i) {
        int d = s[i] - '0';
        sum6 += d;
        if (d != 0) {
            all_zero = false;
        }
    }

    for (int i = 0; i < n; ++i) {
        int d = s[n - 1 - i] - '0';
        if (i % 2 == 1) {
            alt8 = (alt8 - d) % 8;
        }
        else {
            alt8 = (alt8 + d) % 8;
        }
    }
    alt8 = (alt8 % 8 + 8) % 8;

    bool div6 = (sum6 % 6 == 0);
    bool div8 = (alt8 == 0);
    bool div343 = all_zero || (n >= 3 && s[n - 1] == '0' && s[n - 2] == '0' && s[n - 3] == '0');

    cout << (div6 ? "TAK" : "NIE") << " "
        << (div8 ? "TAK" : "NIE") << " "
        << (div343 ? "TAK" : "NIE") << "\n";
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