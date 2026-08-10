#include <iostream>
#include <string>
#include <vector>

using namespace std;

void solve() {
    string s1, s2, s3;
    if (!(cin >> s1 >> s2 >> s3)) return;

    vector<bool> p1(26, false);
    vector<bool> p2(26, false);
    vector<bool> p3(26, false);

    for (char c : s1) p1[c - 'a'] = true;
    for (char c : s2) p2[c - 'a'] = true;
    for (char c : s3) p3[c - 'a'] = true;

    bool possible = false;
    for (int i = 0; i < 26; ++i) {
        if ((p1[i] && p2[i]) || (p2[i] && p3[i]) || (p1[i] && p3[i])) {
            possible = true;
            break;
        }
    }

    if (possible) {
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