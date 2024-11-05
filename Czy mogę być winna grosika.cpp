#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<pair<int, int>> denominations;

    for (int i = 0; i < n; i++) {
        int w, l;
        cin >> w >> l;
        denominations.push_back({ w, l });
    }

    int q;
    cin >> q;
    vector<int> queries(q);

    for (int i = 0; i < q; i++) {
        cin >> queries[i];
    }

    const int MAX_X = 10000;

    vector<bool> dp(MAX_X + 1, false);
    dp[0] = true;

    for (auto& denom : denominations) {
        int value = denom.first;
        int count = denom.second;

        vector<bool> temp_dp = dp;

        for (int i = 0; i <= MAX_X; i++) {
            if (dp[i]) {
                for (int k = 1; k <= count && i + k * value <= MAX_X; k++) {
                    temp_dp[i + k * value] = true;
                }
            }
        }

        dp = temp_dp;
    }

    for (int x : queries) {
        if (dp[x]) {
            cout << "TAK" << endl;
        }
        else {
            cout << "NIE" << endl;
        }
    }

    return 0;
}
