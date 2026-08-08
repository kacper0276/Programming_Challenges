#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int MAX_VAL = 1000000;
bool is_divisible[MAX_VAL + 1];
int pref[MAX_VAL + 1];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;

    vector<int> A;
    A.reserve(n);
    for (int i = 0; i < n; ++i) {
        int val;
        cin >> val;
        if (val <= MAX_VAL) {
            A.push_back(val);
        }
    }

    sort(A.begin(), A.end());
    A.erase(unique(A.begin(), A.end()), A.end());

    for (int val : A) {
        if (is_divisible[val]) continue;
        for (int j = val; j <= MAX_VAL; j += val) {
            is_divisible[j] = true;
        }
    }

    pref[0] = 0;
    for (int i = 1; i <= MAX_VAL; ++i) {
        pref[i] = pref[i - 1] + (is_divisible[i] ? 0 : 1);
    }

    int q;
    if (!(cin >> q)) return 0;

    for (int i = 0; i < q; ++i) {
        int a, b;
        cin >> a >> b;
        if (a > b) swap(a, b);
        cout << pref[b] - pref[a - 1] << "\n";
    }

    return 0;
}