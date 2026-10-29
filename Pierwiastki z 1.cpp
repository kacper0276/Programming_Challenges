#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;

    const double PI = acos(-1.0);

    while (t--) {
        int n;
        cin >> n;
        for (int k = 0; k < n; ++k) {
            double angle = 2.0 * PI * k / n;
            double re = cos(angle);
            double im = sin(angle);
            if (abs(re) < 1e-11) re = 0.0;
            if (abs(im) < 1e-11) im = 0.0;
            cout << fixed << setprecision(10) << re << " " << im << "\n";
        }
    }
    return 0;
}