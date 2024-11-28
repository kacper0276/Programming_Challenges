#include <iostream>

using namespace std;

int main() {
	int phone_number, year_of_birth;

	cin >> phone_number >> year_of_birth;

	// Step 1
	int res = (phone_number % 10) * 2;

	// Step 2
	res += 5;

	// Step 3
	res *= 50;

	// Step 4
	res += 1764;

	// Step 5;
	res -= year_of_birth;

	cout << res;

	return 0;
}