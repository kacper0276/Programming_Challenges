#include <iostream>
#include <algorithm>
#include <cmath>

const int MAX_N = 20;

int main() {
    int n;
    std::cin >> n;

    if (n <= 1 || n >= MAX_N) {
        std::cerr << "Liczba n musi być w przedziale 1 < n < " << MAX_N << std::endl;
        return 1;
    }

    int numbers[MAX_N];
    int abs_values[MAX_N];

    for (int i = 0; i < n; ++i) {
        std::cin >> numbers[i];
    }

    for (int i = 0; i < n; ++i) {
        abs_values[i] = std::abs(numbers[i]);
    }

    std::sort(abs_values, abs_values + n);

    for (int i = 0; i < n; ++i) {
        std::cout << abs_values[i];
        if (i < n - 1) {
            std::cout << " ";
        }
    }
    std::cout << std::endl;

    return 0;
}
