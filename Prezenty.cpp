#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> bag(n);
    unordered_set<int> in_original;

    for (int i = 0; i < n; i++) {
        cin >> bag[i];
        in_original.insert(bag[i]);
    }

    if (in_original.size() == (size_t)n) {
        cout << "OK\n";
        return;
    }

    unordered_set<int> seen;
    vector<int> res(n);
    int next_val = 1;

    for (int i = 0; i < n; i++) {
        int v = bag[i];
        if (seen.find(v) == seen.end()) {
            res[i] = v;
            seen.insert(v);
        }
        else {
            while (in_original.count(next_val) || seen.count(next_val)) {
                next_val++;
            }
            res[i] = next_val;
            seen.insert(next_val);
            next_val++;
        }
    }

    for (int i = 0; i < n; ++i) {
        cout << res[i] << (i == n - 1 ? "" : " ");
    }
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int d;
    if (cin >> d) {
        while (d--) {
            solve();
        }
    }

    return 0;
}