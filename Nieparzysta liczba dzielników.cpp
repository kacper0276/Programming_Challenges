#include <iostream>
#include <cmath>
#include <set>

using namespace std;

bool czyNiejparzystaLiczbaDzielnikow(int n) {
    set<int> zbior;
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            zbior.insert(i);
            zbior.insert(n / i);
        }
    }
    return zbior.size() % 2 == 1;
}

int main() {
    int n;
    cin >> n;
    if (czyNiejparzystaLiczbaDzielnikow(n)) {
        cout << "TAK" << endl;
    }
    else {
        cout << "NIE" << endl;
    }
    return 0;
}
