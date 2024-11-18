#include <iostream>
#include <iomanip>

using namespace std;

double farenheitToCelcius(int n) {
	return 5.0 / 9 * (n - 32);
}

int main() {
	int n;
	cin >> n;

	cout << fixed << setprecision(2) << farenheitToCelcius(n);

	return 0;
}