#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, k;
    if (cin >> n >> m >> k) {
        int s = n + m - k;
        int x = s / 2;
        x = min(x, n);
        x = min(x, m);
        cout << 2 * x << "\n";
    }
    return 0;
}