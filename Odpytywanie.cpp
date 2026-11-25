#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int d, n;
    cin >> d;

    while (d--) {
        cin >> n;
        vector<pair<string, int>> uczniowie(n);

        for (int i = 0; i < n; i++) {
            cin >> uczniowie[i].second >> uczniowie[i].first;
        }

        sort(uczniowie.begin(), uczniowie.end());

        for (int i = 0; i < n; i++) {
            cout << uczniowie[i].second << " ";
        }
        cout << "\n";
    }

    return 0;
}
