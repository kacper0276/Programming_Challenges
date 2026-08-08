#include <iostream>

using namespace std;

void solve() {
    long long n, z;
    cin >> n >> z;

    if (z > n) {
        cout << 0 << "\n";
        return;
    }

    long long p = 0;
    long long temp = n;

    while (temp >= z) {
        temp /= z;
        p += temp;
    }

    cout << p << "\n";
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