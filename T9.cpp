#include <iostream>
#include <string>
#include <vector>

using namespace std;

char getT9(char c) {
    if (c >= 'A' && c <= 'Z') {
        c = c - 'A' + 'a';
    }
    if (c >= 'a' && c <= 'z') {
        if (c >= 'a' && c <= 'c') return '2';
        if (c >= 'd' && c <= 'f') return '3';
        if (c >= 'g' && c <= 'i') return '4';
        if (c >= 'j' && c <= 'l') return '5';
        if (c >= 'm' && c <= 'o') return '6';
        if (c >= 'p' && c <= 's') return '7';
        if (c >= 't' && c <= 'v') return '8';
        if (c >= 'w' && c <= 'z') return '9';
    }
    if (c >= '0' && c <= '9') {
        return c;
    }
    return ' ';
}

void solve() {
    string word, digits;
    if (!(cin >> word >> digits)) return;

    if (word.length() != digits.length()) {
        cout << "NIE\n";
        return;
    }

    bool possible = true;
    for (size_t i = 0; i < word.length(); ++i) {
        if (getT9(word[i]) != digits[i]) {
            possible = false;
            break;
        }
    }

    if (possible) {
        cout << "TAK - " << word << "\n";
    }
    else {
        cout << "NIE\n";
    }
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