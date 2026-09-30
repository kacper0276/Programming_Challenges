#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

struct Bubble {
    long long size;
    int id;
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;

    vector<long long> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    string dir;
    cin >> dir;

    vector<Bubble> st;
    vector<int> survivors;

    for (int i = 0; i < n; ++i) {
        if (dir[i] == 'r') {
            st.push_back({ v[i], i + 1 });
        }
        else {
            long long cur_size = v[i];
            bool alive = true;
            while (!st.empty()) {
                if (st.back().size > cur_size) {
                    st.back().size += cur_size;
                    alive = false;
                    break;
                }
                else if (st.back().size < cur_size) {
                    cur_size += st.back().size;
                    st.pop_back();
                }
                else {
                    st.pop_back();
                    alive = false;
                    break;
                }
            }
            if (alive) {
                survivors.push_back(i + 1);
            }
        }
    }

    for (const auto& b : st) {
        survivors.push_back(b.id);
    }

    sort(survivors.begin(), survivors.end());

    for (size_t i = 0; i < survivors.size(); ++i) {
        cout << survivors[i] << (i + 1 == survivors.size() ? "" : " ");
    }
    cout << "\n";

    return 0;
}