#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        unsigned long long n;
        cin >> n;

        if (n == 0) {
            cout << 1 << "\n";
            continue;
        }

        unsigned long long wynik = 1;
        unsigned long long start = 1;
        unsigned long long dlugosc = 1;

        while (start <= n) {
            unsigned long long koniec = start * 2 - 1;
            if (koniec > n) {
                koniec = n;
            }
            wynik += (koniec - start + 1) * dlugosc;
            dlugosc++;
            start *= 2;
        }

        cout << wynik << "\n";
    }

    return 0;
}
