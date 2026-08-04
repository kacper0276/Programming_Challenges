#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (cin >> t) {
        while (t--) {
            int m;
            unsigned long long n;
            if (cin >> m >> n) {
                unsigned long long x = n - 1;
                int k = (m + 1) / 2;
                unsigned long long result = 0;
                for (int i = 0; i < k; ++i) {
                    if ((x >> i) & 1ULL) {
                        result |= (1ULL << (m - k + i));
                        result |= (1ULL << (k - 1 - i));
                    }
                }
                cout << result << "\n";
            }
        }
    }
    return 0;
}