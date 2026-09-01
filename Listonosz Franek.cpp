#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, p;
    if (!(cin >> n >> p)) return 0;

    vector<pair<int, int>> edges(n);
    int max_v = 0;
    for (int i = 0; i < n; ++i) {
        cin >> edges[i].first >> edges[i].second;
        max_v = max({ max_v, edges[i].first, edges[i].second });
    }

    vector<int> deg(max_v + 1, 0);
    for (int i = 0; i < n; ++i) {
        deg[edges[i].first]++;
        deg[edges[i].second]++;
    }

    bool possible = true;
    for (int i = 1; i <= max_v; ++i) {
        if (deg[i] % 2 != 0) {
            possible = false;
            break;
        }
    }

    if (possible) {
        cout << "TAK\n";
    }
    else {
        cout << "NIE\n";
    }

    return 0;
}