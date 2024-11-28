#include <iostream>
#include <bitset>
#include <string>

using namespace std;

string toBinary(int n) {
    string binary = "";
    while (n > 0) {
        binary = (n % 2 == 0 ? "0" : "1") + binary;
        n /= 2;
    }
    return (binary.empty() ? "0" : binary);
}

int sumBinaryDigits(const string& binary) {
    int sum = 0;
    for (char c : binary) {
        sum += c - '0';
    }
    return sum;
}

int main() {
    int n;
    cin >> n;

    string binary = toBinary(n);

    int sum = sumBinaryDigits(binary);

    string binarySum = toBinary(sum);

    cout << binary << " " << binarySum << endl;

    return 0;
}
