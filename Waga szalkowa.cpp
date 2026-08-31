#include <iostream>
#include <vector>

using namespace std;

void solve() {
    long long n;
    if (!(cin >> n)) return;

    long long original_n = n;
    vector<long long> left_weights;
    vector<long long> right_weights;

    long long power = 1;
    while (n > 0) {
        long long rem = n % 3;
        if (rem == 1) {
            right_weights.push_back(power);
            n /= 3;
        }
        else if (rem == 2) {
            left_weights.push_back(power);
            n = (n + 1) / 3;
        }
        else {
            n /= 3;
        }
        power *= 3;
    }

    cout << original_n;
    for (long long w : left_weights) {
        cout << " " << w;
    }
    cout << " =";
    for (long long w : right_weights) {
        cout << " " << w;
    }
    cout << "\n";
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