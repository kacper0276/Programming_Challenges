#include <iostream>
#include <string>

using namespace std;

void solve() {
    string s;
    cin >> s;
    for (int i = 0; i < (int)s.size(); ++i) {
        if (s[i] == '|') {
            if (i == 0 || s[i - 1] == '+' || s[i - 1] == '-' || s[i - 1] == '(') {
                s[i] = '(';
            }
            else {
                s[i] = ')';
            }
        }
    }
    cout << s << "\n";
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