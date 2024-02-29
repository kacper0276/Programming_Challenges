#include <iostream>

int main() {

    long long n;
    std::cin >> n;

    long long lukers = 0;
    long long read_pages = 0;
    long long next_lukers_page = 1; 

    while (read_pages < n) {
        lukers++;
        read_pages += next_lukers_page;
        next_lukers_page++;
    }

    std::cout << lukers << std::endl;

    return 0;
}