#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;

    const long long MOD = 1010101;

    while (t--) {
        int p;
        string n;
        cin >> p >> n;

        long long result = 0;
        for (char c : n) {
            result = (result * p + (c - '0')) % MOD;
        }

        cout << result << "\n";
    }

    return 0;
}