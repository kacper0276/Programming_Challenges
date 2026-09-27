#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

unsigned long long C[65][65];

void precompute() {
    for (int i = 0; i <= 60; ++i) {
        C[i][0] = 1;
        for (int j = 1; j <= i; ++j) {
            C[i][j] = C[i - 1][j - 1] + C[i - 1][j];
        }
    }
}

void solve() {
    int n, a, b;
    unsigned long long k;
    if (!(cin >> n >> a >> b >> k)) return;

    vector<int> result;
    int current_val = 0;

    while (true) {
        if ((int)result.size() >= a) {
            if (k == 1) {
                break;
            }
            k--;
        }

        for (int x = current_val + 1; x <= n; ++x) {
            int rem_elements = n - x;
            int min_r = max(0, a - (int)result.size() - 1);
            int max_r = b - (int)result.size() - 1;

            unsigned long long cnt = 0;
            if (min_r <= max_r) {
                for (int r = min_r; r <= max_r; ++r) {
                    if (r <= rem_elements) {
                        cnt += C[rem_elements][r];
                    }
                }
            }

            if (k <= cnt) {
                result.push_back(x);
                current_val = x;
                break;
            }
            else {
                k -= cnt;
            }
        }
    }

    for (size_t i = 0; i < result.size(); ++i) {
        cout << result[i] << (i + 1 == result.size() ? "" : " ");
    }
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    precompute();
    int d;
    if (cin >> d) {
        while (d--) {
            solve();
        }
    }
    return 0;
}