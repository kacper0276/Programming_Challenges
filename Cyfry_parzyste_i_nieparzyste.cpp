#include <iostream>
#include <string>

const long long MOD = 1000000007;

long long power(long long base, long long exp) {
    long long result = 1;
    while (exp > 0) {
        if (exp % 2 == 1) {
            result = (result * base) % MOD;
        }
        base = (base * base) % MOD;
        exp /= 2;
    }
    return result;
}

int main() {
    int n;
    std::cin >> n;

    while (n--) {
        std::string s;
        std::cin >> s;

        int len = s.length();
        int count_n = 0, count_p = 0;
        for (char ch : s) {
            if (ch == 'n') {
                count_n++;
            } else if (ch == 'p') {
                count_p++;
            }
        }

        long long result;
        if (len == 1) {
            if (s[0] == 'p') {
                result = 5;
            } else {
                result = 5;
            }
        } else {
            if (s[0] == 'p') {
                long long first_digit_options = 4;
                long long other_p_options = power(5, count_p - 1);
                long long total_p_options = (first_digit_options * other_p_options) % MOD;
                long long total_n_options = power(5, count_n);
                result = (total_p_options * total_n_options) % MOD;
            } else {
                long long first_digit_options = 5;
                long long other_p_options = power(5, count_p);
                long long total_p_options = (first_digit_options * other_p_options) % MOD;
                long long total_n_options = power(5, count_n - 1);
                result = (total_p_options * total_n_options) % MOD;
            }
        }

        std::cout << result << std::endl;
    }

    return 0;
}
