#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>

int parse_time(const std::string& str) {
    int h = (str[0] - '0') * 10 + (str[1] - '0');
    int m = (str[3] - '0') * 10 + (str[4] - '0');
    int s = (str[6] - '0') * 10 + (str[7] - '0');
    return h * 3600 + m * 60 + s;
}

void solve() {
    int s;
    if (!(std::cin >> s)) return;

    std::string sleep_str;
    std::cin >> sleep_str;
    int sleep_threshold = parse_time(sleep_str);

    std::vector<int> events;
    events.push_back(9 * 3600);
    events.push_back(14 * 3600);

    for (int i = 0; i < s; ++i) {
        std::string time_str, status;
        std::cin >> time_str >> status;
        if (status == "AC") {
            events.push_back(parse_time(time_str));
        }
    }

    std::sort(events.begin(), events.end());

    int max_sleep = 0;
    for (size_t i = 0; i + 1 < events.size(); ++i) {
        int diff = events[i + 1] - events[i];
        if (diff > sleep_threshold) {
            max_sleep = std::max(max_sleep, diff - sleep_threshold);
        }
    }

    if (max_sleep > 0) {
        int h = max_sleep / 3600;
        int m = (max_sleep % 3600) / 60;
        int sec = max_sleep % 60;
        std::cout << std::setfill('0') << std::setw(2) << h << ":"
            << std::setfill('0') << std::setw(2) << m << ":"
            << std::setfill('0') << std::setw(2) << sec << "\n";
    }
    else {
        std::cout << 0 << "\n";
    }
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int z;
    if (std::cin >> z) {
        while (z--) {
            solve();
        }
    }

    return 0;
}