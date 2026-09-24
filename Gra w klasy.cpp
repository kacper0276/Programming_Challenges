#include <iostream>

using namespace std;

const int MAXN = 1000000;
const int MOD = 1000000009;

int dp[MAXN + 1];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    dp[1] = 1;
    dp[2] = 1;
    dp[3] = 2;

    for (int i = 4; i <= MAXN; i++) {
        dp[i] = ((dp[i - 1] + dp[i - 2]) % MOD + dp[i - 3]) % MOD;
    }

    int d;
    if (cin >> d) {
        while (d--) {
            int n;
            cin >> n;
            cout << dp[n] << "\n";
        }
    }

    return 0;
}