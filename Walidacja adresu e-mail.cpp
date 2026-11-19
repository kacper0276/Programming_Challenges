#include <iostream>
#include <string>

using namespace std;

bool isLetter(char c) {
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}

bool isAllowed(char c) {
    return isLetter(c) || (c >= '0' && c <= '9') || c == '.' || c == '_';
}

bool isValid(const string& s) {
    int n = s.size();
    int atPos = -1;
    int atCount = 0;

    for (int i = 0; i < n; ++i) {
        if (s[i] == '@') {
            atCount++;
            atPos = i;
        }
        else if (!isAllowed(s[i])) {
            return false;
        }
    }

    if (atCount != 1) {
        return false;
    }

    for (int i = 0; i < n; ++i) {
        if (s[i] == '.') {
            if (i == 0 || i == n - 1) return false;
            if (s[i - 1] == '.' || s[i - 1] == '@') return false;
            if (s[i + 1] == '.' || s[i + 1] == '@') return false;
        }
    }

    int lastDot = -1;
    for (int i = n - 1; i >= 0; --i) {
        if (s[i] == '.') {
            lastDot = i;
            break;
        }
    }

    if (lastDot == -1 || lastDot <= atPos) {
        return false;
    }

    int len1 = atPos;
    int len2 = lastDot - atPos - 1;
    int len3 = n - lastDot - 1;

    if (len1 < 1 || len1 > 20) return false;
    if (len2 < 1 || len2 > 20) return false;
    if (len3 != 2 && len3 != 3) return false;

    for (int i = lastDot + 1; i < n; ++i) {
        if (!isLetter(s[i])) {
            return false;
        }
    }

    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    if (!(cin >> t)) return 0;

    string line;
    getline(cin, line);

    for (int i = 0; i < t; ++i) {
        getline(cin, line);
        if (!line.empty() && line.back() == '\r') {
            line.pop_back();
        }
        if (isValid(line)) {
            cout << "Tak\n";
        }
        else {
            cout << "Nie\n";
        }
    }

    return 0;
}
