#include <iostream>

using namespace std;

long long nwd(long long a, long long b) {
    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (cin >> t) {
        while (t--) {
            long long a, b, d;
            cin >> a >> b >> d;
            long long g = nwd(a, b);
            cout << (a / g) << "/" << ((a + b) / g) << "\n";
        }
    }
    return 0;
}