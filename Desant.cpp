#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;

    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i].first >> v[i].second;
    }

    sort(v.begin(), v.end());

    int q;
    if (!(cin >> q)) return 0;

    while (q--) {
        pair<int, int> p;
        cin >> p.first >> p.second;
        if (binary_search(v.begin(), v.end(), p)) {
            cout << "TAK\n";
        }
        else {
            cout << "NIE\n";
        }
    }

    return 0;
}
