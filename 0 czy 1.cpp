#include <iostream>
#include <string>

using namespace std;

void solve() {
    long long num;
    if (!(cin >> num)) return;

    long long total_sum = 0;
    long long current_term_parity = num % 2;
    string op;

    while (cin >> op) {
        if (op == "=") {
            break;
        }
        cin >> num;
        if (op == "*") {
            current_term_parity = (current_term_parity * (num % 2)) % 2;
        }
        else if (op == "+" || op == "-") {
            total_sum = (total_sum + current_term_parity) % 2;
            current_term_parity = num % 2;
        }
    }

    total_sum = (total_sum + current_term_parity) % 2;

    if (total_sum == 0) {
        cout << "TAK\n";
    }
    else {
        cout << "NIE\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    if (cin >> n) {
        while (n--) {
            solve();
        }
    }
    return 0;
}