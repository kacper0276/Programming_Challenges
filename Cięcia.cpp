#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long a, b;
    int c;

    while (cin >> a >> b >> c) {
        vector<long long> h_cuts;
        vector<long long> v_cuts;

        h_cuts.push_back(0);
        h_cuts.push_back(a);
        v_cuts.push_back(0);
        v_cuts.push_back(b);

        for (int i = 0; i < c; ++i) {
            long long q;
            cin >> q;
            if (q < 0) {
                h_cuts.push_back(-q);
            }
            else {
                v_cuts.push_back(q);
            }
        }

        sort(h_cuts.begin(), h_cuts.end());
        h_cuts.erase(unique(h_cuts.begin(), h_cuts.end()), h_cuts.end());

        sort(v_cuts.begin(), v_cuts.end());
        v_cuts.erase(unique(v_cuts.begin(), v_cuts.end()), v_cuts.end());

        long long max_h = 0;
        long long count_h = 0;
        for (size_t i = 1; i < h_cuts.size(); ++i) {
            long long diff = h_cuts[i] - h_cuts[i - 1];
            if (diff > max_h) {
                max_h = diff;
                count_h = 1;
            }
            else if (diff == max_h) {
                count_h++;
            }
        }

        long long max_w = 0;
        long long count_w = 0;
        for (size_t i = 1; i < v_cuts.size(); ++i) {
            long long diff = v_cuts[i] - v_cuts[i - 1];
            if (diff > max_w) {
                max_w = diff;
                count_w = 1;
            }
            else if (diff == max_w) {
                count_w++;
            }
        }

        long long max_area = max_h * max_w;
        long long total_count = count_h * count_w;

        cout << max_area << " " << total_count << "\n";
    }

    return 0;
}