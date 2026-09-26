#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void merge_line(vector<int>& line, long long& score) {
    vector<int> vals;
    for (int v : line) {
        if (v != 0) vals.push_back(v);
    }
    vector<int> res;
    for (size_t i = 0; i < vals.size(); ++i) {
        if (i + 1 < vals.size() && vals[i] == vals[i + 1]) {
            int merged = vals[i] * 2;
            res.push_back(merged);
            score += merged;
            ++i;
        }
        else {
            res.push_back(vals[i]);
        }
    }
    while (res.size() < line.size()) {
        res.push_back(0);
    }
    line = res;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;

    vector<vector<int>> board(n, vector<int>(n, 0));

    int w;
    cin >> w;
    for (int i = 0; i < w; ++i) {
        int p, y, x;
        cin >> p >> y >> x;
        board[y][x] = p;
    }

    int r;
    cin >> r;
    long long score = 0;

    for (int k = 0; k < r; ++k) {
        char dir;
        int p, y, x;
        cin >> dir >> p >> y >> x;

        if (dir == 'L') {
            for (int i = 0; i < n; ++i) {
                merge_line(board[i], score);
            }
        }
        else if (dir == 'P') {
            for (int i = 0; i < n; ++i) {
                reverse(board[i].begin(), board[i].end());
                merge_line(board[i], score);
                reverse(board[i].begin(), board[i].end());
            }
        }
        else if (dir == 'G') {
            for (int j = 0; j < n; ++j) {
                vector<int> col(n);
                for (int i = 0; i < n; ++i) col[i] = board[i][j];
                merge_line(col, score);
                for (int i = 0; i < n; ++i) board[i][j] = col[i];
            }
        }
        else if (dir == 'D') {
            for (int j = 0; j < n; ++j) {
                vector<int> col(n);
                for (int i = 0; i < n; ++i) col[i] = board[i][j];
                reverse(col.begin(), col.end());
                merge_line(col, score);
                reverse(col.begin(), col.end());
                for (int i = 0; i < n; ++i) board[i][j] = col[i];
            }
        }

        board[y][x] = p;
    }

    cout << score << "\n";

    return 0;
}