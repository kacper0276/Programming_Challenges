#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, p, k;
    if (!(cin >> n >> p >> k)) return 0;

    vector<long long> s(n + 1);
    for (int i = 1; i <= n; ++i) {
        cin >> s[i];
    }

    vector<bool> visited(n + 1, false);
    int current = p;
    int bounces = 1;

    while (!visited[current]) {
        if (current == k) {
            cout << bounces << "\n";
            return 0;
        }
        visited[current] = true;
        current = (current - 1 + s[current]) % n + 1;
        bounces++;
    }

    cout << "NIGDY\n";
    return 0;
}