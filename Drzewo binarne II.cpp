#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;

    int count[70] = { 0 };

    for (int j = 0; j < n; ++j) {
        unsigned long long x;
        cin >> x;

        int level = 0;
        while (x > 0) {
            level++;
            x /= 2;
        }
        count[level]++;
    }

    int q;
    cin >> q;

    for (int j = 0; j < q; ++j) {
        int i;
        cin >> i;
        if (i >= 1 && i < 70) {
            cout << count[i] << "\n";
        }
        else {
            cout << 0 << "\n";
        }
    }

    return 0;
}