#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    if (cin >> s) {
        int n = s.length();
        int i = 0;
        while (i < n) {
            if (s[i] == '1' && i + 2 < n) {
                int val = (s[i] - '0') * 100 + (s[i + 1] - '0') * 10 + (s[i + 2] - '0');
                cout << (char)val;
                i += 3;
            }
            else if (i + 1 < n) {
                int val = (s[i] - '0') * 10 + (s[i + 1] - '0');
                cout << (char)val;
                i += 2;
            }
            else {
                break;
            }
        }
        cout << "\n";
    }
    return 0;
}