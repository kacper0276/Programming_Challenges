#include <iostream>
#include <string>

using namespace std;

int to_dec(const string& s) {
    int num = 0;
    for (char c : s) {
        num = num * 2 + (c - '0');
    }
    return num;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string b1, b2, b3, b4;
    while (cin >> b1 >> b2 >> b3 >> b4) {
        cout << to_dec(b1) << to_dec(b2) << ":" << to_dec(b3) << to_dec(b4) << "\n";
    }
    return 0;
}