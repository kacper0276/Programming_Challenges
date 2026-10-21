#include <iostream>
#include <map>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int b;
    if (!(cin >> b)) return 0;

    map<int, int> diff;
    int t;
    while (cin >> t) {
        diff[t]++;
        diff[t + 30]--;
    }

    int curr = 0;
    int start = -1;

    for (const auto& [time, delta] : diff) {
        bool was_open = (curr > b);
        curr += delta;
        bool is_open = (curr > b);

        if (!was_open && is_open) {
            start = time;
        }
        else if (was_open && !is_open) {
            cout << "[" << start << " - " << time << ")\n";
        }
    }

    return 0;
}