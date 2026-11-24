#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

long long gcd(long long a, long long b) {
    while (b != 0) {
        long long t = a % b;
        a = b;
        b = t;
    }
    return a;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int d;
    if (!(cin >> d)) return 0;

    cout << fixed << setprecision(2);

    while (d--) {
        long long ax, ay, bx, by;
        cin >> ax >> ay >> bx >> by;

        long long dx = bx - ax;
        if (dx < 0) dx = -dx;
        long long dy = by - ay;
        if (dy < 0) dy = -dy;

        long long k = gcd(dx, dy);
        if (k == 0) {
            cout << 0 << " " << 0.0 << "\n";
        }
        else {
            double len = sqrt(static_cast<double>(dx * dx + dy * dy)) / k;
            cout << k << " " << len << "\n";
        }
    }

    return 0;
}
