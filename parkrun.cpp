#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;

    int min_seconds = 1e9;
    vector<pair<string, string>> winners;

    for (int i = 0; i < n; ++i) {
        string fname, lname, time_str;
        cin >> fname >> lname >> time_str;

        size_t colon_pos = time_str.find(':');
        int mins = stoi(time_str.substr(0, colon_pos));
        int secs = stoi(time_str.substr(colon_pos + 1));
        int total_secs = mins * 60 + secs;

        if (total_secs < min_seconds) {
            min_seconds = total_secs;
            winners.clear();
            winners.push_back({ fname, lname });
        }
        else if (total_secs == min_seconds) {
            winners.push_back({ fname, lname });
        }
    }

    for (const auto& winner : winners) {
        cout << winner.first << " " << winner.second << "\n";
    }

    return 0;
}