#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <algorithm>

using namespace std;

const int days_in_month[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

int date_to_day(int d, int m) {
    int total = d;
    for (int i = 1; i < m; ++i) {
        total += days_in_month[i];
    }
    return total;
}

pair<int, int> day_to_date(int day) {
    int m = 1;
    while (day > days_in_month[m]) {
        day -= days_in_month[m];
        m++;
    }
    return { day, m };
}

int parse_date(const string& s) {
    int d = stoi(s.substr(0, 2));
    int m = stoi(s.substr(3, 2));
    return date_to_day(d, m);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;

    int max_start = 1;
    int min_end = 365;

    for (int i = 0; i < n; ++i) {
        string s1, s2;
        cin >> s1 >> s2;
        int start = parse_date(s1);
        int end = parse_date(s2);
        max_start = max(max_start, start);
        min_end = min(min_end, end);
    }

    if (max_start == min_end) {
        auto [d, m] = day_to_date(max_start);
        cout << setfill('0') << setw(2) << d << "."
            << setfill('0') << setw(2) << m << ".2019\n";
    }
    else {
        cout << "Jak Marcin zgubi buty do biegania\n";
    }

    return 0;
}