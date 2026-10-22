#include <iostream>
#include <vector>

using namespace std;

const int MAX_PRIME_LIMIT = 1300000;
const int MAX_PRIME_COUNT = 100005;

bool is_prime[MAX_PRIME_LIMIT];
int primes[MAX_PRIME_COUNT];

void sieve() {
    fill(is_prime + 2, is_prime + MAX_PRIME_LIMIT, true);
    int count = 0;
    for (int p = 2; p < MAX_PRIME_LIMIT && count < MAX_PRIME_COUNT; ++p) {
        if (is_prime[p]) {
            primes[count++] = p;
            for (long long i = 1LL * p * p; i < MAX_PRIME_LIMIT; i += p) {
                is_prime[i] = false;
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    sieve();

    int t;
    if (!(cin >> t)) return 0;

    while (t--) {
        int m;
        cin >> m;

        int pos = 0;
        for (int i = 2; i <= m; ++i) {
            pos = (pos + primes[m - i]) % i;
        }

        cout << pos + 1 << "\n";
    }

    return 0;
}