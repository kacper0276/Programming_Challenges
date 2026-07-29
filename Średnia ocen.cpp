#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    if (!(cin >> n)) return;
    int count[7] = { 0 };
    int max_grade = 0;
    int min_grade = 7;
    for (int i = 0; i < n; ++i) {
        int grade;
        cin >> grade;
        count[grade]++;
        if (grade > max_grade) max_grade = grade;
        if (grade < min_grade) min_grade = grade;
    }

    if (max_grade < 4 || (max_grade == 4 && min_grade < 4)) {
        cout << -1 << "\n";
        return;
    }

    if (min_grade >= 4) {
        cout << 1 << "\n";
        return;
    }

    double b1 = 1.0 / 4.0;
    double b2 = 2.0 / 4.0;
    double b3 = 3.0 / 4.0;
    double b5 = 5.0 / 4.0;
    double b6 = 6.0 / 4.0;

    for (int k = 1; ; ++k) {
        double sum = count[1] * pow(b1, k) +
            count[2] * pow(b2, k) +
            count[3] * pow(b3, k) +
            count[4] +
            count[5] * pow(b5, k) +
            count[6] * pow(b6, k);
        if (sum >= n - 1e-9) {
            cout << k << "\n";
            return;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}