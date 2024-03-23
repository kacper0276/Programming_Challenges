#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool czySaIdentyczne(std::vector<std::vector<int>>& lazanki) {
    sort(lazanki.begin(), lazanki.end());
    for (int i = 1; i < lazanki.size(); ++i) {
        if (lazanki[i] == lazanki[i - 1]) {
            return true;
        }
    }
    return false;
}

int main() {
    int n;
    cin >> n;

    vector<vector<int>> lazanki;
    for (int i = 0; i < n; ++i) {
        int a, b, c;
        cin >> a >> b >> c;
        vector<int> lazanka = { a, b, c };
        sort(lazanka.begin(), lazanka.end());
        lazanki.push_back(lazanka);
    }

    if (czySaIdentyczne(lazanki)) {
        cout << "Tak" << endl;
    }
    else {
        cout << "Nie" << endl;
    }

    return 0;
}