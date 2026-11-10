#include <iostream>
#include <utility>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int d;
    if (cin >> d) {
        while (d--) {
            long long a, b;
            char slash;
            cin >> a >> slash >> b;

            long long ans = 0;
            while (b > 0) {
                ans += a / b;
                a %= b;
                swap(a, b);
            }

            cout << ans << "\n";
        }
    }

    return 0;
}