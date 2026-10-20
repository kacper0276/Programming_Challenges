#include <iostream>
#include <string>
#include <vector>

using namespace std;

int charValue(char c) {
    switch (c) {
    case 'I': return 1;
    case 'V': return 5;
    case 'X': return 10;
    case 'L': return 50;
    case 'C': return 100;
    case 'D': return 500;
    case 'M': return 1000;
    default:  return 0;
    }
}

int romanToInt(const string& s) {
    int total = 0;
    int n = s.length();

    for (int i = 0; i < n; i++) {
        int current = charValue(s[i]);
        if (i + 1 < n && current < charValue(s[i + 1])) {
            total -= current;
        }
        else {
            total += current;
        }
    }
    return total;
}

string intToRoman(int num) {
    const vector<pair<int, string>> romanMap = {
        { 1000, "M" },{ 900, "CM" },{ 500, "D" },{ 400, "CD" },
        { 100, "C" },{ 90, "XC" },{ 50, "L" },{ 40, "XL" },
        { 10, "X" },{ 9, "IX" },{ 5, "V" },{ 4, "IV" },
        { 1, "I" }
    };

    string result = "";
    for (const auto& entry : romanMap) {
        while (num >= entry.first) {
            result += entry.second;
            num -= entry.first;
        }
    }
    return result;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string r1, r2;
    while (cin >> r1 >> r2) {
        int val1 = romanToInt(r1);
        int val2 = romanToInt(r2);
        int sum = val1 + val2;

        cout << intToRoman(sum) << "\n";
    }

    return 0;
}