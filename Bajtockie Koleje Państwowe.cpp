#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m;
    if (!(cin >> n >> m)) return 0;

    vector<int> degree(n + 1, 0);

    for (int i = 0; i < m; ++i) {
        int u, v;
        cin >> u >> v;
        degree[u]++;
        degree[v]++;
    }

    long long needed_connections = 0;
    for (int i = 1; i <= n; ++i) {
        if (degree[i] < 2) {
            needed_connections += (static_cast<long long>(2) - degree[i]);
        }
    }

    cout << needed_connections << "\n";

    return 0;
}