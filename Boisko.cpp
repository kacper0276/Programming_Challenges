#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long K, Z, N, P, X;
    if (cin >> K >> Z >> N >> P >> X) {
        long long rem = K - P * Z - (N - P) * X;
        long long A = 0;
        if (rem > 0) {
            A = (rem + N - 1) / N;
        }
        long long B = A + X;
        cout << A << " " << B << "\n";
    }

    return 0;
}