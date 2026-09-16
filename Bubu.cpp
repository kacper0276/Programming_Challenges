#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

unsigned __int128 nCr(int n, int r) {
    if (r < 0 || r > n) return 0;
    if (r == 0 || r == n) return 1;
    if (r > n / 2) r = n - r;
    unsigned __int128 res = 1;
    for (int i = 1; i <= r; ++i) {
        res = res * (n - i + 1) / i;
    }
    return res;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int d;
    if (!(cin >> d)) return 0;

    while (d--) {
        string s;
        cin >> s;

        map<char, int> count;
        for (char c : s) {
            count[c]++;
        }

        int n = s.length();
        unsigned __int128 ans = 1;

        for (auto const& [ch, c] : count) {
            ans *= nCr(n, c);
            n -= c;
        }

        unsigned long long out = ans;
        cout << out << "\n";
    }

    return 0;
}