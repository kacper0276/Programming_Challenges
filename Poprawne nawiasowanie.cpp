#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    if (cin >> s) {
        long long n = s.length() / 2;

        long long wynik = n * (n + 1) / 2;

        cout << wynik << "\n";
    }

    return 0;
}