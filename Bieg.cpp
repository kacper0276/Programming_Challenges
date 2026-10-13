#include <iostream>

using namespace std;

const long long pts[31] = {
    0,
    0, 0, 3, 0, 5, 3, 0, 0, 3, 50,
    0, 3, 0, 0, 15, 0, 0, 3, 0, 50,
    3, 0, 0, 3, 5, 0, 3, 0, 0, 150
};

long long pref[31];

long long count_points(long long x) {
    if (x <= 0) return 0;
    return (x / 30) * pref[30] + pref[x % 30];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    for (int i = 1; i <= 30; ++i) {
        pref[i] = pref[i - 1] + pts[i];
    }

    int n;
    if (!(cin >> n)) return 0;

    while (n--) {
        long long a, b;
        cin >> a >> b;
        cout << count_points(b) - count_points(a - 1) << "\n";
    }

    return 0;
}