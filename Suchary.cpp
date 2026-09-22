#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int get_first(const vector<int>& pref, int val) {
    if (pref.empty() || pref.back() >= val) return pref.size();
    int l = 0, r = pref.size() - 1;
    int ans = pref.size();
    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (pref[mid] < val) {
            ans = mid;
            r = mid - 1;
        }
        else {
            l = mid + 1;
        }
    }
    return ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;

    vector<int> prefA(n), prefB(n);
    for (int i = 0; i < n; ++i) {
        int a, b;
        cin >> a >> b;
        prefA[i] = (i == 0) ? a : min(prefA[i - 1], a);
        prefB[i] = (i == 0) ? b : min(prefB[i - 1], b);
    }

    int m;
    if (!(cin >> m)) return 0;

    while (m--) {
        int c, d;
        cin >> c >> d;

        int idx_K = get_first(prefA, c);
        int idx_T = get_first(prefB, d);

        if (idx_K < idx_T) {
            cout << "Tadeusz\n";
        }
        else if (idx_T < idx_K) {
            cout << "Karol\n";
        }
        else {
            cout << "Remis\n";
        }
    }

    return 0;
}