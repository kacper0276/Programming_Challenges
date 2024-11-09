#include <iostream>
using namespace std;

long long count_even(long long a, long long b) {
    return (b / 2) - ((a - 1) / 2);
}

long long count_odd(long long a, long long b) {
    return (b - a + 1) - count_even(a, b);
}

int main() {
    long long a, b;
    cin >> a >> b;

    long long evens = count_even(a, b);
    long long odds = count_odd(a, b);

    long long removed = (evens / 2) * 2 + (odds / 2) * 2;
    cout << removed << endl;

    return 0;
}
