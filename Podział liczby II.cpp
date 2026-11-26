#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int d;
    if (!(cin >> d)) return 0;

    while (d--) {
        long long n;
        cin >> n;

        long long m = n;
        long long pow2 = 2;
        while (m % 2 == 0) {
            m /= 2;
            pow2 *= 2;
        }

        if (m == 1) {
            cout << n << " = BRAK\n";
            continue;
        }

        long long k = min(pow2, m);
        for (long long i = 3; i < pow2 && i * i <= m; i += 2) {
            if (m % i == 0) {
                k = i;
                break;
            }
        }

        long long a = ((2 * n) / k - k + 1) / 2;
        cout << n << " = " << a;
        for (long long i = 1; i < k; ++i) {
            cout << " + " << (a + i);
        }
        cout << '\n';
    }

    return 0;
}
