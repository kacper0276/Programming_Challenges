#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int d;
    if (!(cin >> d)) return 0;

    while (d--) {
        int n;
        cin >> n;

        vector<int> q(2 * n);
        int head = 0, tail = 0;

        for (int i = 0; i < n; ++i) {
            q[tail++] = i;
        }

        vector<int> ans(n);
        for (int val = 1; val <= n; ++val) {
            int idx = q[head++];
            ans[idx] = val;
            if (head < tail) {
                q[tail++] = q[head++];
            }
        }

        for (int i = 0; i < n; ++i) {
            cout << ans[i] << (i + 1 == n ? "" : " ");
        }
        cout << "\n";
    }

    return 0;
}