#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (cin >> n) {
        while (n--) {
            string s;
            cin >> s;
            string out = "";
            for (size_t i = 0; i + 4 < s.length(); i += 5) {
                int val = 0;
                for (int j = 0; j < 5; ++j) {
                    val = (val << 1) | (s[i + j] - '0');
                }
                out += (char)('A' + val);
            }
            cout << out << "\n";
        }
    }
    return 0;
}