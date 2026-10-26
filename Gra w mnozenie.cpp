#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    unsigned long long n;
    while (cin >> n) {
        unsigned long long p = 1;
        bool alice_turn = true;
        while (p < n) {
            if (alice_turn) {
                p *= 9;
            }
            else {
                p *= 2;
            }
            alice_turn = !alice_turn;
        }
        if (!alice_turn) {
            cout << "A\n";
        }
        else {
            cout << "B\n";
        }
    }

    return 0;
}