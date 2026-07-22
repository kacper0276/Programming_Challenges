#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool dfs(int idx, int fives_needed, bool tight, int L, string& current, const string& N) {
    if (idx == L) {
        return !tight && fives_needed <= 0;
    }

    int rem = L - idx;
    if (fives_needed > rem) {
        return false;
    }

    if (tight) {
        int f = max(0, fives_needed);
        string max_suffix = string(rem - f, '9') + string(f, '5');
        if (max_suffix <= N.substr(idx)) {
            return false;
        }
    }

    int start_digit = (idx == 0) ? 1 : 0;
    if (tight) {
        start_digit = max(start_digit, N[idx] - '0');
    }

    for (int d = start_digit; d <= 9; ++d) {
        bool next_tight = tight && (d == N[idx] - '0');
        int next_fives = fives_needed - (d == 5);
        current.push_back('0' + d);
        if (dfs(idx + 1, next_fives, next_tight, L, current, N)) {
            return true;
        }
        current.pop_back();
    }

    return false;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string N;
    int K;
    if (cin >> N >> K) {
        int start_L = max((int)N.length(), K);
        for (int L = start_L; ; ++L) {
            string current = "";
            if (dfs(0, K, L == N.length(), L, current, N)) {
                cout << current << "\n";
                break;
            }
        }
    }
    return 0;
}