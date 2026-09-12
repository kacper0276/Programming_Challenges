#include <iostream>
#include <numeric>

using namespace std;

int main() {
    unsigned long long a, b, c, d;
    char s1, s2;

    if (cin >> a >> s1 >> b >> c >> s2 >> d) {
        unsigned long long g = gcd(b, d);
        unsigned long long num = a * (d / g) + c * (b / g);
        unsigned long long den = (b / g) * d;

        unsigned long long final_gcd = gcd(num, den);
        num /= final_gcd;
        den /= final_gcd;

        cout << a << "/" << b << " + " << c << "/" << d << " = " << num << "/" << den << endl;
    }

    return 0;
}