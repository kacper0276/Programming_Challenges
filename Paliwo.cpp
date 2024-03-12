#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	double n, b;

	cin >> n >> b;

	double vat = b - n;

	vat = vat / 2;

	cout << fixed << setprecision(2) << vat << " " << fixed << setprecision(2) << n + vat;

	return 0;
}