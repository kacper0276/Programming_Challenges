#include <iostream>
#include <vector>

int NWD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int n;
    std::cin >> n;

    std::vector<int> sequence(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> sequence[i];
    }

    std::vector<std::vector<int>> gcdMatrix(n, std::vector<int>(n));

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            gcdMatrix[i][j] = NWD(sequence[i], sequence[j]);
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            std::cout << gcdMatrix[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
