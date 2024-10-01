#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    long long a, b, c, s;
    cin >> a >> b >> c >> s;

    long long totalDistance = s * 100;

    long long lcm_ab = (a * b) / __gcd(a, b);
    long long lcm_abc = (lcm_ab * c) / __gcd(lcm_ab, c);

    long long overlaps = totalDistance / lcm_abc;

    cout << overlaps << endl;

    return 0;
}
